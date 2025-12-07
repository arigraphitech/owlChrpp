# 🤝 Guide de Contribution - ParserProject

Merci de votre intérêt pour contribuer à ParserProject ! Ce document explique comment participer au développement du projet.

## 📋 Table des Matières

1. [Code de Conduite](#code-de-conduite)
2. [Comment Contribuer](#comment-contribuer)
3. [Standards de Code](#standards-de-code)
4. [Workflow Git](#workflow-git)
5. [Tests](#tests)
6. [Documentation](#documentation)

---

## 📜 Code de Conduite

En participant à ce projet, vous acceptez de respecter les principes suivants :

- **Respect** : Soyez respectueux envers tous les contributeurs
- **Collaboration** : Travaillez ensemble de manière constructive
- **Ouverture** : Soyez ouvert aux critiques et suggestions
- **Professionnalisme** : Maintenez un environnement professionnel

---

## 🛠️ Comment Contribuer

### Types de Contributions Bienvenues

1. **🐛 Correction de bugs**
2. **✨ Nouvelles fonctionnalités**
3. **📚 Amélioration de la documentation**
4. **🧪 Ajout de tests**
5. **🎨 Améliorations de code**
6. **🌐 Traductions**

### Avant de Commencer

1. **Vérifier les issues existantes** : Regardez si quelqu'un travaille déjà sur votre idée
2. **Créer une issue** : Décrivez ce que vous voulez faire
3. **Discuter** : Attendez les retours avant de commencer le développement

---

## 💻 Standards de Code

### Style C++

#### Nommage

```cpp
// Classes : PascalCase
class OwlParser { };

// Fonctions : camelCase
void parseOntology() { }

// Variables : camelCase
std::string ontologyUri;

// Constantes : UPPER_SNAKE_CASE
const std::string OWL_THING = "owl:Thing";

// Membres privés : camelCase avec underscore
class MyClass {
private:
    std::string member_variable_;
};
```

#### Formatage

```cpp
// Indentation : 4 espaces (pas de tabs)
void function() {
    if (condition) {
        doSomething();
    }
}

// Accolades : Style K&R
if (condition) {
    // code
} else {
    // code
}

// Espaces autour des opérateurs
int result = a + b;
if (x == y) { }

// Pas d'espaces avant les parenthèses de fonction
void myFunction(int param);
```

#### Commentaires

```cpp
// Commentaires courts : // style
// Commentaires sur une ligne

/*
 * Commentaires longs : style bloc
 * Sur plusieurs lignes
 * Pour documenter les fonctions complexes
 */

/**
 * Documentation des fonctions publiques
 * @param ontology Le chemin vers l'ontologie
 * @return true si le parsing réussit
 */
bool parseOntology(const std::string& ontology);
```

### Style CHR++

#### Règles

```chrpp
// Nommage des règles : camelCase avec préfixe descriptif
r_subclassTransitivity @ owlSubclassOf(A,B), owlSubclassOf(B,C) ==> 
    owlSubclassOf(A,C) ;;

// Guards : clairement séparés
rule @ constraint1, constraint2 ==> 
    !(X==Y) | result ;;

// Commentaires : avant chaque règle
//ClassAssertion inference: if X is instance of A and A subclass of B, then X is instance of B
subclass @ owlSubclassOf(A,B), owlClassAssertion(X,A,true) ==> 
    owlClassAssertion(X,B,true) ;;
```

#### Contraintes

```chrpp
// Déclaration : types explicites
<chr_constraint>
    myConstraint(?std::string, +bool),  // ? = input/output, + = ground
    anotherOne(+int)
</chr_constraint>

// Règles passives : pour éviter les duplications
myConstraint(X) #passive \ myConstraint(X) <=> true ;;
```

---

## 🔄 Workflow Git

### 1. Fork et Clone

```bash
# Fork sur GitHub (bouton "Fork")
# Puis cloner votre fork
git clone https://github.com/VOTRE_USERNAME/owlChrpp.git
cd owlChrpp

# Ajouter le remote upstream
git remote add upstream https://github.com/arigraphitech/owlChrpp.git
```

### 2. Créer une Branche

```bash
# Mettre à jour depuis upstream
git checkout firstVersion
git pull upstream firstVersion

# Créer une branche pour votre feature
git checkout -b feature/ma-nouvelle-fonctionnalite
# ou pour un bugfix
git checkout -b fix/correction-bug-123
```

**Convention de nommage des branches** :
- `feature/description` : Nouvelles fonctionnalités
- `fix/description` : Corrections de bugs
- `docs/description` : Documentation
- `refactor/description` : Refactoring
- `test/description` : Ajout de tests

### 3. Développer

```bash
# Faire vos modifications
nano owlFunctional.chrpp

# Compiler et tester
make
./build/ParserProject

# Commiter régulièrement
git add owlFunctional.chrpp
git commit -m "feat: ajout de la query queryDomain"
```

**Convention de messages de commit** (Conventional Commits) :
- `feat:` Nouvelle fonctionnalité
- `fix:` Correction de bug
- `docs:` Documentation
- `style:` Formatage
- `refactor:` Refactoring
- `test:` Tests
- `chore:` Maintenance

Exemples :
```bash
git commit -m "feat: ajoute support pour DataPropertyAssertion"
git commit -m "fix: corrige querySubClassOf qui retourne rien"
git commit -m "docs: améliore README avec exemples"
git commit -m "test: ajoute tests pour IntersectionOf"
```

### 4. Pousser et Pull Request

```bash
# Pousser votre branche
git push origin feature/ma-nouvelle-fonctionnalite

# Sur GitHub, créer une Pull Request
# Base: firstVersion <- Compare: feature/ma-nouvelle-fonctionnalite
```

**Template de Pull Request** :

```markdown
## Description
Brève description de ce que fait votre PR.

## Type de Changement
- [ ] 🐛 Correction de bug
- [ ] ✨ Nouvelle fonctionnalité
- [ ] 📚 Documentation
- [ ] 🧪 Tests
- [ ] 🎨 Refactoring

## Changements
- Liste des changements principaux
- Autre changement

## Tests
- [ ] J'ai testé mes changements localement
- [ ] J'ai ajouté des tests si nécessaire
- [ ] Tous les tests passent

## Checklist
- [ ] Mon code suit les standards du projet
- [ ] J'ai commenté le code complexe
- [ ] J'ai mis à jour la documentation
- [ ] Pas de warnings de compilation
```

---

## 🧪 Tests

### Tester Localement

```bash
# Compiler
make

# Exécuter tous les tests
./build/ParserProject

# Vérifier les résultats
./build/ParserProject 2>&1 | grep "TEST"
```

### Ajouter un Test

Dans `owlFunctional.chrpp`, section `main()` :

```cpp
// TEST X: Description du test
std::cout << "=== TEST X: Mon nouveau test ===" << std::endl;
std::cout << "Résultat attendu: XYZ" << std::endl;
space->maNouvelleFonction("http://example.org#Something");
std::cout << std::endl;
```

### Créer une Ontologie de Test

```owl
# Dans example_test.ofn
Prefix(ex:=<http://example.org#>)
Ontology(
    # Vos axiomes de test
    Declaration(Class(ex:TestClass))
    SubClassOf(ex:SubTest ex:TestClass)
)
```

---

## 📚 Documentation

### Documenter une Fonction C++

```cpp
/**
 * Parse une ontologie OWL 2 et charge les axiomes dans l'espace CHR++
 * 
 * @param filename Chemin vers le fichier .ofn ou .owl
 * @param space Référence vers l'espace de contraintes CHR++
 * @throws std::runtime_error Si le fichier n'existe pas
 * @return true si le parsing réussit, false sinon
 * 
 * @example
 * auto space = OWL2::create();
 * parseOntology("example.ofn", *space);
 */
bool parseOntology(const std::string& filename, OWL2& space);
```

### Documenter une Règle CHR++

```chrpp
/**
 * Transitive closure of SubClassOf
 * 
 * If A ⊆ B and B ⊆ C, then A ⊆ C
 * 
 * Example:
 *   PhDStudent ⊆ Student, Student ⊆ Person
 *   → PhDStudent ⊆ Person
 */
r_transitiveSubclass @ owlSubclassOf(A,B), owlSubclassOf(B,C) ==> 
    different(A,B,C) | owlSubclassOf(A,C) ;;
```

### Mettre à Jour le README

Après un changement significatif, mettez à jour :
- `README.md` : Description générale
- `INSTALL.md` : Instructions d'installation si nécessaire
- `DEPENDENCIES.md` : Nouvelles dépendances

---

## 🔍 Review Process

### Critères de Review

Une PR sera acceptée si :

1. ✅ **Code quality** : Code propre et bien structuré
2. ✅ **Tests** : Tous les tests passent
3. ✅ **Documentation** : Code documenté
4. ✅ **Style** : Suit les conventions du projet
5. ✅ **Fonctionnel** : Fait ce qu'elle est censée faire
6. ✅ **Pas de régression** : Ne casse pas de fonctionnalités existantes

### Répondre aux Commentaires

```bash
# Faire les modifications demandées
git add fichiers_modifies
git commit -m "fix: adresse commentaires review"
git push origin feature/ma-branche

# La PR sera automatiquement mise à jour
```

---

## 🎯 Domaines où Contribuer

### Priorité Haute

1. **Matérialisation transitive de SubClassOf** ([Issue #X](link))
2. **Correction de querySubClassOf** ([Issue #Y](link))
3. **Support complet OWL 2 RL profile**

### Priorité Moyenne

1. **Ajout de queries supplémentaires**
2. **Optimisation des règles CHR++**
3. **Support d'autres formats (Turtle, N-Triples)**

### Priorité Basse

1. **Interface graphique**
2. **API REST**
3. **Documentation en anglais**

---

## 📞 Questions ?

- **Issues GitHub** : [https://github.com/arigraphitech/owlChrpp/issues](https://github.com/arigraphitech/owlChrpp/issues)
- **Discussions** : [https://github.com/arigraphitech/owlChrpp/discussions](https://github.com/arigraphitech/owlChrpp/discussions)

---

## 🙏 Remerciements

Merci de contribuer à ParserProject ! Chaque contribution, petite ou grande, est appréciée.

---

**Dernière mise à jour** : 7 décembre 2025
