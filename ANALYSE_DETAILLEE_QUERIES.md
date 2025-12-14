# 🔍 ANALYSE DÉTAILLÉE DES QUERIES OWL - Diagnostic Complet

**Date:** 7 décembre 2025  
**Objectif:** Identifier précisément pourquoi certaines queries ne fonctionnent pas

---

## 📊 Résumé des Tests

| # | Query | Statut | Résultat Obtenu | Résultat Attendu |
|---|-------|--------|-----------------|------------------|
| 1 | querySuperClassOfUri(PhDStudent) | ⚠️ PARTIEL | PhDStudent, Student, Learner | + owl:Thing |
| 2 | querySubClassOfUri(Student) | ❌ ÉCHEC | **RIEN** | PhDStudent, Student, Learner |
| 3 | queryClassificationUri(Alice) | ❌ ÉCHEC | **RIEN** | Student, Learner, owl:Thing |
| 4 | queryClassificationTempUri(Bob) | ⚠️ PARTIEL | Professor | + owl:Thing |
| 5 | queryInstanceURI(Alice, Student) | ✅ OK | true | true |
| 6 | queryInstanceURI(Bob, Student) | ✅ OK | false | false |
| 7 | queryInstancesURI(Professor) | ✅ OK | Robert, Bob | Robert, Bob |
| 8 | queryInstancesURI(Course) | ✅ OK | Math101 | Math101 |

**Taux de succès:** 4/8 complets (50%), 2/8 partiels (25%), 2/8 échecs (25%)

---

## 🔴 PROBLÈME CRITIQUE #1: querySubClassOfUri(Student) retourne RIEN

### Code de la Query (lignes 620-630)

```chrpp
//querySubClassOf: query to retrieve all subclasses of a class
querySubClassOfUri(URIC) , logicalName(URIC,X) ==> querySubClassOf(X) , res(URIC) ;;

//querySubClassOf: recursively follow subclass relationships to find all subclasses
querySubClassOf(X) , owlSubclassOf(Y,X) , logicalName(URIY,Y) ==> !(X==Y) | querySubClassOf(Y) , res(URIY) ;;

//querySubClassOf: also check equivalent classes
querySubClassOf(X) , owlEquivalentClass(X,Y) , logicalName(URIY,Y) ==> !(X==Y) | res(URIY) ;;

//querySubClassOf: cleanup - remove query constraint when done
querySubClassOf(X) <=> success() ;;
```

### Analyse du Problème

**🔍 Diagnostic:**

1. **État initial de l'ontologie:**
   - `owlSubclassOf(PhDStudent, Student)` existe ✓
   - `owlEquivalentClass(Student, Learner)` existe ✓
   - `logicalName("http://example.org#Student", Student)` existe ✓

2. **Exécution de la query:**
   ```
   Appel: querySubClassOfUri("http://example.org#Student")
   ```

3. **Règle d'initialisation:**
   ```chrpp
   querySubClassOfUri(URIC) , logicalName(URIC,X) ==> querySubClassOf(X) , res(URIC) ;;
   ```
   
   **PROBLÈME:** Cette règle utilise l'opérateur `==>` (propagation).
   
   En CHR++, `==>` signifie:
   - La règle s'exécute **UNE SEULE FOIS** quand les contraintes correspondent
   - Elle **N'EST PAS RÉÉVALUÉE** même si de nouvelles contraintes matching sont ajoutées
   
4. **Ordre d'exécution problématique:**
   ```
   ÉTAPE 1: Parsing de l'ontologie
            → logicalName("http://example.org#Student", Student) est ajouté
   
   ÉTAPE 2: Appel de la query
            → querySubClassOfUri("http://example.org#Student") est ajouté
   
   ÉTAPE 3: Recherche de matching
            → CHR++ cherche : querySubClassOfUri(URIC) + logicalName(URIC, X)
            → Trouve: URIC = "http://example.org#Student", X = Student
            → Exécute: querySubClassOf(Student), res("http://example.org#Student")
   ```
   
   **✅ Jusqu'ici, ça devrait fonctionner!**

5. **Test de la règle récursive:**
   ```chrpp
   querySubClassOf(X) , owlSubclassOf(Y,X) , logicalName(URIY,Y) ==> querySubClassOf(Y) , res(URIY) ;;
   ```
   
   Avec X = Student, cherche: `owlSubclassOf(Y, Student)`
   
   **Devrait trouver:** `owlSubclassOf(PhDStudent, Student)` avec Y = PhDStudent
   
   **MAIS NE TROUVE RIEN!** 🚨

### 🔬 Hypothèses sur la Cause Réelle

#### Hypothèse A: La contrainte querySubClassOf(Student) n'est jamais créée

**Test:** Ajoutons un affichage de debug pour vérifier.

```chrpp
querySubClassOfUri(URIC) , logicalName(URIC,X) ==> 
    afficher("DEBUG: querySubClassOf initializing for:"), 
    afficher(URIC),
    querySubClassOf(X) , 
    res(URIC) ;;
```

#### Hypothèse B: owlSubclassOf(PhDStudent, Student) n'existe pas au moment de la query

**Vérification nécessaire:** Afficher toutes les contraintes `owlSubclassOf` avant la query.

#### Hypothèse C: Le matching de la règle récursive échoue à cause du guard

Le guard `!(X==Y)` pourrait bloquer si X et Y sont mal comparés.

**Test:** Retirer temporairement le guard pour voir si ça change quelque chose.

#### Hypothèse D: La règle de cleanup s'exécute trop tôt

```chrpp
querySubClassOf(X) <=> success() ;;
```

Cette règle de simplification (`<=>`) **supprime immédiatement** `querySubClassOf(X)`.

**Problème potentiel:** Si la règle de cleanup s'exécute avant les règles récursives, la contrainte disparaît avant de pouvoir matcher!

**Solution:** Ajouter un délai dans le cleanup ou utiliser un marqueur de "fin de traitement".

---

## 🔴 PROBLÈME CRITIQUE #2: queryClassificationUri(Alice) retourne RIEN

### Code de la Query (lignes 636-643)

```chrpp
//queryClassification: query to retrieve all classes that an individual is instance of (with true classification)
logicalName(URIX,X) \ queryClassificationUri(URIX)  <=> queryClassification(X) ;;

//queryClassification: add all direct class assertions to results
queryClassification(X) , owlClassAssertion(X,C,true) , logicalName(URIC,C) ==> res(URIC);;

queryClassification(X) <=> success() ;;
```

### Analyse du Problème

**🔍 Diagnostic:**

1. **État initial de l'ontologie:**
   - `owlClassAssertion(Alice, Student, true)` existe ✓
   - `logicalName("http://example.org#Alice", Alice)` existe ✓
   - `logicalName("http://example.org#Student", Student)` existe ✓

2. **Exécution de la query:**
   ```
   Appel: queryClassificationUri("http://example.org#Alice")
   ```

3. **Règle d'initialisation:**
   ```chrpp
   logicalName(URIX,X) \ queryClassificationUri(URIX) <=> queryClassification(X) ;;
   ```
   
   **Utilise `\` (removal) et `<=>` (simplification):**
   - Cherche: `logicalName(URIX, X)` + `queryClassificationUri(URIX)`
   - Supprime: `logicalName(URIX, X)` + `queryClassificationUri(URIX)`
   - Ajoute: `queryClassification(X)`

4. **🚨 PROBLÈME MAJEUR: logicalName est supprimé!**

   ```
   AVANT: logicalName("http://example.org#Alice", Alice) existe
   APRÈS: logicalName("http://example.org#Alice", Alice) est SUPPRIMÉ
   ```
   
   **Conséquence:** La règle suivante ne peut plus fonctionner:
   ```chrpp
   queryClassification(X) , owlClassAssertion(X,C,true) , logicalName(URIC,C) ==> res(URIC);;
   ```
   
   Car `logicalName(URIC,C)` pourrait avoir été supprimé aussi!

5. **Autre problème: Pas de récursivité vers les superclasses**

   La query actuelle trouve seulement les classes **directes** d'Alice.
   
   Pour trouver Student, Learner et owl:Thing, il faudrait:
   - Trouver Student (assertion directe) ✓
   - Trouver Learner (équivalent à Student) ❌ Manquant
   - Trouver owl:Thing (superclasse de tout) ❌ Manquant

### 🔬 Solutions Proposées

#### Solution A: Ne pas supprimer logicalName

```chrpp
queryClassificationUri(URIX) , logicalName(URIX,X) ==> queryClassification(X) ;;
```

Changement: `==>` au lieu de `\ <=>` pour ne pas supprimer.

#### Solution B: Ajouter une récursion vers les superclasses

```chrpp
queryClassification(X) , owlClassAssertion(X,C,true) , logicalName(URIC,C) ==> 
    res(URIC),
    querySuperClassOf(C) ;;  // Récursion vers les superclasses
```

---

## 🟡 PROBLÈME PARTIEL #3: querySuperClassOfUri - owl:Thing manquant

### Résultat Actuel

```
TEST 1: querySuperClassOfUri(PhDStudent)
Obtenu: PhDStudent, Student, Learner
Manque: owl:Thing
```

### Code de la Query (lignes 604-616)

```chrpp
//querySuperClassOfUri: query to retrieve all superclasses of a class given its URI
querySuperClassOfUri(URIC) , logicalName(URIC,X) ==> querySuperClassOf(X) ;;

//querySuperClassOf: add current class to results first
querySuperClassOf(X) , logicalName(URIC,X) ==> res(URIC) ;;

//querySuperClassOf: recursively follow subclass relationships to find all superclasses up to the root
querySuperClassOf(X) , owlSubclassOf(X,Y) ==> !(X==Y) | querySuperClassOf(Y) ;;

//querySuperClassOf: also follow equivalent classes
querySuperClassOf(X) , owlEquivalentClass(X,Y) , logicalName(URICY,Y) ==> !(X==Y) | res(URICY) ;;

//querySuperClassOf: cleanup - remove query constraint when done
querySuperClassOf(X) <=> success() ;;
```

### Analyse du Problème

**🔍 Trace d'exécution théorique:**

```
1. querySuperClassOf(PhDStudent)
   → res("http://example.org#PhDStudent") ✓

2. owlSubclassOf(PhDStudent, Student) existe
   → querySuperClassOf(Student)
   → res("http://example.org#Student") ✓

3. owlEquivalentClass(Student, Learner) existe
   → res("http://example.org#Learner") ✓

4. owlSubclassOf(Student, owl:Thing) existe?
   → Devrait créer querySuperClassOf(owl:Thing)
   → res("owl:Thing")
```

**🚨 Pourquoi owl:Thing n'apparaît pas?**

#### Hypothèse A: owl:Thing n'a pas de logicalName

La règle:
```chrpp
querySuperClassOf(X) , logicalName(URIC,X) ==> res(URIC) ;;
```

Nécessite que X ait un `logicalName`. Si `owl:Thing` n'a pas de `logicalName`, il ne sera jamais ajouté aux résultats!

**Vérification nécessaire:** Chercher `logicalName(*, owl:Thing)` dans la base de contraintes.

#### Hypothèse B: owlSubclassOf(Student, owl:Thing) n'existe pas

L'ontologie OWL devrait normalement créer une relation `SubClassOf` vers `owl:Thing` pour toute classe.

**Vérification nécessaire:** Chercher `owlSubclassOf(*, owl:Thing)` dans l'ontologie parsée.

#### Hypothèse C: La récursion s'arrête trop tôt

La règle de cleanup:
```chrpp
querySuperClassOf(X) <=> success() ;;
```

S'exécute dès qu'il n'y a plus de match pour les autres règles. Peut-être que `querySuperClassOf(owl:Thing)` est créé puis immédiatement supprimé par cleanup.

### 🔬 Solutions Proposées

#### Solution A: Forcer l'ajout de owl:Thing

```chrpp
querySuperClassOfUri(URIC) , logicalName(URIC,X) ==> 
    querySuperClassOf(X),
    res("owl:Thing") ;;  // Ajout forcé
```

#### Solution B: Créer explicitement logicalName pour owl:Thing

Dans le parsing ou l'initialisation:
```chrpp
initOWL() ==> logicalName("owl:Thing", owl:Thing) ;;
```

#### Solution C: Ajouter une règle spéciale pour owl:Thing

```chrpp
querySuperClassOf(X) ==> res("owl:Thing") ;;  // Tout a owl:Thing comme superclasse
```

---

## 🟡 PROBLÈME PARTIEL #4: queryClassificationTempUri - owl:Thing manquant

### Résultat Actuel

```
TEST 4: queryClassificationTempUri(Bob)
Obtenu: Professor
Manque: owl:Thing
```

### Même cause que Problème #3

Bob est instance de Professor.  
Professor devrait avoir owl:Thing comme superclasse.  
Mais owl:Thing n'est jamais atteint ou affiché.

---

## ✅ QUERIES QUI FONCTIONNENT CORRECTEMENT

### TEST 5 & 6: queryInstanceURI

```chrpp
logicalName(URIC,C) ,logicalName(URIX,X) \ queryInstanceURI(URIX,URIC) <=> queryInstance(X,C) ;;
owlClassAssertion(X,C,true) \ queryInstance(X,C)<=> afficher("true");;
queryInstance(X,C)<=> afficher("false");;
```

**Pourquoi ça marche:**
- Logique simple: vérifie une assertion unique
- Pas de récursion
- Pas besoin de parcourir des relations complexes
- Utilise simplification `<=>` qui fonctionne instantanément

### TEST 7 & 8: queryInstancesURI

```chrpp
logicalName(URIC,C) \ queryInstancesURI(URIC) <=> queryInstances(C) ;;
queryInstances(C) , owlClassAssertion(X,C,true) , logicalName(URIX,X) ==> res(URIX);;
queryInstances(C) <=> success() ;;
```

**Pourquoi ça marche:**
- Parcours simple des assertions
- Utilise `==>` (propagation) qui collecte tous les matchs
- logicalName n'est pas supprimé prématurément
- La règle de cleanup attend que toutes les assertions soient traitées

---

## 🎯 RECOMMANDATIONS PRIORITAIRES

### 🔴 URGENT: Corriger querySubClassOf et queryClassification

**Problème principal:** Les règles de cleanup s'exécutent trop tôt.

**Solution recommandée:**

```chrpp
// Au lieu de cleanup immédiat:
querySubClassOf(X) <=> success() ;;

// Utiliser un marqueur de fin:
querySubClassOf(X) , markEnd() <=> success() ;;

// Et ajouter markEnd à la fin du traitement:
finalizeQuery() ==> markEnd() ;;
```

Ou utiliser une approche différente:

```chrpp
// Marquer la contrainte comme "traitée" au lieu de la supprimer
querySubClassOf(X) ==> querySubClassOfProcessed(X) ;;

// Règles récursives vérifient que ce n'est pas déjà traité
querySubClassOf(X) , owlSubclassOf(Y,X) , logicalName(URIY,Y) ==> 
    !(X==Y) , !querySubClassOfProcessed(Y) | 
    querySubClassOf(Y) , res(URIY) ;;
```

### 🟡 IMPORTANT: Ajouter owl:Thing systématiquement

```chrpp
querySuperClassOfUri(URIC) , logicalName(URIC,X) ==> 
    querySuperClassOf(X),
    res("owl:Thing") ;;
```

### 🟢 AMÉLIORATION: Ajouter récursion dans queryClassification

```chrpp
queryClassification(X) , owlClassAssertion(X,C,true) , logicalName(URIC,C) ==> 
    res(URIC),
    querySuperClassOf(C) ;;
```

---

## 📝 TESTS DIAGNOSTIQUES À EFFECTUER

### Test 1: Vérifier si querySubClassOf(Student) est bien créé

Ajouter debug:
```chrpp
querySubClassOf(X) ==> afficher("DEBUG: querySubClassOf created for:"), afficher(X) ;;
```

### Test 2: Afficher toutes les contraintes owlSubclassOf

Ajouter:
```chrpp
owlSubclassOf(X,Y) ==> afficher("SubClassOf:"), afficher(X), afficher("->"), afficher(Y) ;;
```

### Test 3: Vérifier l'ordre des cleanups

Ajouter timestamps ou compteurs pour voir quand les cleanups s'exécutent.

### Test 4: Vérifier l'existence de logicalName pour owl:Thing

```chrpp
logicalName(URI, owl:Thing) ==> afficher("owl:Thing has URI:"), afficher(URI) ;;
```

---

## 🔄 PROCHAINES ÉTAPES

1. **Implémenter les corrections pour querySubClassOf**
2. **Tester avec debug activé**
3. **Implémenter les corrections pour queryClassification**
4. **Ajouter owl:Thing systématiquement**
5. **Retester tous les tests**
6. **Valider que le taux de succès atteint 95%+**

---

*Rapport d'analyse généré le 7 décembre 2025*
