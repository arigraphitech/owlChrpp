# 🔍 DIAGNOSTIC FINAL - Pourquoi querySubClassOf et queryClassification Échouent

**Date:** 7 décembre 2025  
**Statut:** PROBLÈME IDENTIFIÉ - Solution proposée

---

## ❌ PROBLÈME CRITIQUE IDENTIFIÉ

### TEST 2: querySubClassOfUri(Student) - RETOURNE RIEN

**Code actuel:**
```chrpp
querySubClassOfUri(URIC) , logicalName(URIC,X) ==> 
    querySubClassOf(X) , res(URIC) ;;

r_querySubClassOf1 @ querySubClassOf(X), owlSubclassOf(Y,X), logicalName(URIY,Y) ==> 
    !(X==Y) | querySubClassOf(Y), res(URIY) ;;
```

**Trace d'exécution:**
1. ✅ `querySubClassOfUri("http://example.org#Student")` est appelé
2. ✅ Match avec `logicalName("http://example.org#Student", X)` où X est un pointeur (ex: `0x55ce60773db0`)
3. ✅ Crée `querySubClassOf(0x55ce60773db0)` et `res("http://example.org#Student")`
4. ❌ **LA RÈGLE RÉCURSIVE NE MATCH JAMAIS!**

**Pourquoi la règle récursive ne match pas:**

La règle cherche:
```chrpp
querySubClassOf(X), owlSubclassOf(Y,X), logicalName(URIY,Y)
```

Avec:
- `X = 0x55ce60773db0` (le pointeur pour Student)
- Cherche `owlSubclassOf(Y, 0x55ce60773db0)` 

**Mais dans la base de contraintes, on a:**
```
owlSubclassOf(0x55ce607826e0, 0x55ce607908c0)  // PhDStudent → IntersectionOf
owlSubclassOf(0x55ce607826e0, 0x55ce60773db0)  // PhDStudent → Student ✓
owlSubclassOf(0x55ce607826e0, 0x55ce60787d90)  // PhDStudent → SomeValuesFrom
```

La contrainte `owlSubclassOf(0x55ce607826e0, 0x55ce60773db0)` existe ! Où `0x55ce607826e0` = PhDStudent et `0x55ce60773db0` = Student.

**🚨 DONC LE MATCH DEVRAIT FONCTIONNER!**

---

## 🔬 HYPOTHÈSE: La règle de cleanup s'exécute trop tôt

```chrpp
r_querySubClassOfCleanup @ querySubClassOf(X) <=> success() ;;
```

Cette règle de simplification (`<=>`) **supprime immédiatement** `querySubClassOf(X)` dès qu'elle est créée, **AVANT** que la règle récursive ait une chance de s'exécuter!

**Ordre d'exécution CHR++:**
```
ÉTAPE 1: querySubClassOf(0x55ce60773db0) est créé
ÉTAPE 2: CHR++ cherche des règles applicables
         - r_querySubClassOf1 (propagation ==>)
         - r_querySubClassOfCleanup (simplification <=>)
ÉTAPE 3: ⚠️ Les règles de simplification (<==>) ont la PRIORITÉ sur les règles de propagation (==>)
ÉTAPE 4: r_querySubClassOfCleanup s'exécute EN PREMIER
         → querySubClassOf(0x55ce60773db0) est SUPPRIMÉ
ÉTAPE 5: r_querySubClassOf1 ne peut plus s'exécuter car querySubClassOf n'existe plus
```

---

## ✅ SOLUTION: Retarder le cleanup

### Option A: Utiliser un marqueur de fin

```chrpp
//querySubClassOf: init
querySubClassOfUri(URIC), logicalName(URIC,X) ==> 
    querySubClassOf(X), res(URIC) ;;

//querySubClassOf: recursive rules
r_querySubClassOf1 @ querySubClassOf(X), owlSubclassOf(Y,X), logicalName(URIY,Y) ==> 
    !(X==Y) | querySubClassOf(Y), res(URIY) ;;

r_querySubClassOf2 @ querySubClassOf(X), owlEquivalentClass(X,Y), logicalName(URIY,Y) ==> 
    !(X==Y) | res(URIY) ;;

//querySubClassOf: mark as processed instead of deleting
r_querySubClassOfDone @ querySubClassOf(X) ==> querySubClassOfProcessed(X) ;;

//querySubClassOf: cleanup processed markers at the end
querySubClassOfProcessed(X) <=> success() ;;
```

**Avantage:** La contrainte `querySubClassOf(X)` n'est jamais supprimée, elle est juste "marquée comme traitée".

### Option B: Utiliser #pragma pour forcer l'ordre

```chrpp
#pragma passive r_querySubClassOfCleanup

r_querySubClassOf1 @ querySubClassOf(X), owlSubclassOf(Y,X), logicalName(URIY,Y) ==> 
    !(X==Y) | querySubClassOf(Y), res(URIY) ;;

r_querySubClassOfCleanup @ querySubClassOf(X) <=> success() ;;
```

**Avantage:** Force CHR++ à appliquer les règles de propagation avant le cleanup.

### Option C: Ne PAS utiliser de cleanup

Simplement laisser les contraintes `querySubClassOf` dans la base. Elles ne gênent pas.

```chrpp
//querySubClassOf: init
querySubClassOfUri(URIC), logicalName(URIC,X) ==> 
    querySubClassOf(X), res(URIC) ;;

//querySubClassOf: recursive rules
r_querySubClassOf1 @ querySubClassOf(X), owlSubclassOf(Y,X), logicalName(URIY,Y) ==> 
    !(X==Y) | querySubClassOf(Y), res(URIY) ;;

r_querySubClassOf2 @ querySubClassOf(X), owlEquivalentClass(X,Y), logicalName(URIY,Y) ==> 
    !(X==Y) | res(URIY) ;;

// PAS DE CLEANUP!
```

**Avantage:** Le plus simple. Les contraintes restent en mémoire mais ne sont pas exécutées plusieurs fois grâce aux règles `#passive`.

---

## 🎯 SOLUTION RECOMMANDÉE: Option C (Pas de cleanup)

C'est la solution la plus simple et la plus sûre.

---

## ❌ PROBLÈME #2: queryClassificationUri(Alice) - RETOURNE RIEN

**Code actuel:**
```chrpp
logicalName(URIX,X) \ queryClassificationUri(URIX) <=> queryClassification(X) ;;

queryClassification(X), owlClassAssertion(X,C,true), logicalName(URIC,C) ==> 
    res(URIC);;

queryClassification(X) <=> success() ;;
```

**Même problème:** La règle de cleanup supprime `queryClassification(X)` avant que la règle de propagation ne s'exécute.

**Solution:** Supprimer la règle de cleanup.

---

## 📝 IMPLÉMENTATION DE LA SOLUTION

### Pour querySubClassOf:

```chrpp
//querySubClassOf: query to retrieve all subclasses of a class
querySubClassOfUri(URIC), logicalName(URIC,X) ==> 
    querySubClassOf(X), res(URIC) ;;

//querySubClassOf: recursively follow subclass relationships to find all subclasses  
r_querySubClassOf1 @ querySubClassOf(X), owlSubclassOf(Y,X), logicalName(URIY,Y) ==> 
    !(X==Y) | querySubClassOf(Y), res(URIY) ;;

//querySubClassOf: also check equivalent classes
r_querySubClassOf2 @ querySubClassOf(X), owlEquivalentClass(X,Y), logicalName(URIY,Y) ==> 
    !(X==Y) | res(URIY) ;;

//querySubClassOf: NO CLEANUP - let constraints stay in memory
```

### Pour queryClassification:

```chrpp
//queryClassification: query to retrieve all classes that an individual is instance of
queryClassificationUri(URIX), logicalName(URIX,X) ==> 
    queryClassification(X) ;;

//queryClassification: add all direct class assertions to results
r_queryClassification1 @ queryClassification(X), owlClassAssertion(X,C,true), logicalName(URIC,C) ==> 
    res(URIC), querySuperClassOf(C) ;;  // Also get superclasses

//queryClassification: NO CLEANUP
```

**Note:** J'ai aussi changé la règle d'init pour ne PAS supprimer `logicalName(URIX,X)` car il est utilisé ailleurs.

---

## 🔄 TESTS ATTENDUS APRÈS CORRECTION

### TEST 2: querySubClassOfUri(Student)

**Avant:** RIEN  
**Après:** 
```
http://example.org#Student
http://example.org#PhDStudent  
http://example.org#Learner
```

### TEST 3: queryClassificationUri(Alice)

**Avant:** RIEN  
**Après:**
```
http://example.org#Student
http://example.org#Learner
owl:Thing (si on force l'ajout)
```

---

## 🎯 PRIORITÉ: HAUTE

Cette correction est **CRITIQUE** car elle bloque 2 tests sur 8 (25% des tests).

Après cette correction, le taux de succès devrait passer de 50% à au moins 75%.

---

## 📊 TABLEAU RÉCAPITULATIF

| Problème | Cause | Solution | Impact |
|----------|-------|----------|--------|
| querySubClassOf retourne RIEN | Cleanup s'exécute avant récursion | Supprimer cleanup | TEST 2 ✅ |
| queryClassification retourne RIEN | Cleanup s'exécute avant propagation | Supprimer cleanup | TEST 3 ✅ |
| owl:Thing manquant | Jamais atteint par récursion | Forcer ajout | TEST 1,4 ✅ |

---

**Implémentation maintenant?** 🚀
