# ParserProject - OWL 2 Reasoner with CHR++

🦉 Un raisonneur sémantique OWL 2 implémenté en CHR++ (Constraint Handling Rules) utilisant la bibliothèque COWL pour le parsing d'ontologies.

## 📋 Description

Ce projet implémente un moteur d'inférence et de raisonnement pour les ontologies OWL 2 (Web Ontology Language). Il combine :
- **CHR++** : Système de règles de contraintes pour l'inférence logique
- **COWL** : Bibliothèque C de parsing d'ontologies OWL 2
- **Queries** : Système de requêtes pour interroger les ontologies

### Fonctionnalités

#### 🎯 Inférences OWL 2 Supportées

- **Hiérarchie de classes** : SubClassOf, EquivalentClass, transitivité
- **Propriétés d'objets** : SubObjectProperty, transitivité, symétrie, inversibilité
- **Propriétés de données** : SubDataProperty, domaines, ranges, types XSD
- **Classes complexes** :
  - IntersectionOf (conjonction)
  - UnionOf (disjonction)
  - ComplementOf (négation)
  - ObjectSomeValuesFrom (∃R.C)
  - ObjectAllValuesFrom (∀R.C)
  - DataSomeValuesFrom, DataAllValuesFrom
  - ObjectMaxCardinality, DataMaxCardinality
  - HasValue, OneOf
- **Individus** : SameIndividual, DifferentIndividuals
- **Contraintes** : DisjointClasses, DisjointProperties
- **owl:Thing** et **owl:Nothing**

#### 🔍 Système de Requêtes

1. **querySuperClassOfUri(URI)** - Récupère toutes les superclasses d'une classe (incluant owl:Thing)
2. **querySubClassOfUri(URI)** - Récupère toutes les sous-classes d'une classe
3. **queryClassificationUri(URI)** - Récupère toutes les classes dont un individu est instance
4. **queryInstanceURI(IndividualURI, ClassURI)** - Vérifie si un individu est instance d'une classe
5. **queryInstancesURI(ClassURI)** - Liste tous les individus d'une classe

## 🚀 Installation

Voir [INSTALL.md](INSTALL.md) pour les instructions détaillées d'installation.

### Prérequis

- **CMake** ≥ 3.14
- **GCC/G++** avec support C++17
- **Git**
- **CHR++** (compilateur de règles de contraintes)
- **COWL** (bibliothèque OWL 2 - incluse en sous-module)

### Installation Rapide

```bash
# Cloner le dépôt avec les sous-modules
git clone --recursive https://github.com/arigraphitech/owlChrpp.git
cd owlChrpp

# Construire le projet
mkdir -p build && cd build
cmake ..
make

# Exécuter
./ParserProject ../example2.ofn
```

## 📖 Utilisation

### Exécution Basique

```bash
./build/ParserProject [fichier_ontologie.ofn]
```

Si aucun fichier n'est spécifié, `example2.ofn` est utilisé par défaut.

### Exemples d'Ontologies

Le projet inclut plusieurs exemples :
- **example2.ofn** : Ontologie académique (Student, Professor, Course)
- **example_pizza.owl** : Ontologie de pizzas (format RDF/XML)
- **example1.rdf** : Exemple en RDF/XML

### Format de Fichier Supporté

Le projet supporte le format **OWL 2 Functional Syntax** (.ofn) :

```owl
Prefix(ex:=<http://example.org#>)
Ontology(
    Declaration(Class(ex:Student))
    Declaration(Class(ex:Professor))
    SubClassOf(ex:PhDStudent ex:Student)
    ClassAssertion(ex:Student ex:Alice)
    ObjectPropertyAssertion(ex:enrolledIn ex:Alice ex:Math101)
)
```

### Exemple de Requêtes

```cpp
// Dans le main() de owlFunctional.chrpp
auto space = OWL2::create();
ParserCowl<OWL2> parser("example2.ofn", *space);
parser.load();

// Requêtes disponibles
space->querySuperClassOfUri("http://example.org#PhDStudent");
// Résultat: PhDStudent, Student, Learner, owl:Thing

space->queryInstancesURI("http://example.org#Professor");
// Résultat: Bob, Robert

space->queryInstanceURI("http://example.org#Alice", "http://example.org#Student");
// Résultat: true
```

## 🏗️ Architecture

### Structure du Projet

```
ParserProject/
├── owlFunctional.chrpp      # Règles CHR++ (fichier principal)
├── parsercowl.h/.cpp         # Parser COWL pour OWL 2
├── Parser.h                  # Interface de parsing générique
├── AnySimpleType.h           # Types de données XSD
├── stringType.h              # Gestion des chaînes de caractères
├── CMakeLists.txt            # Configuration CMake
├── Makefile                  # Makefile principal
├── example*.ofn/owl/rdf      # Ontologies d'exemple
├── lib/cowl/                 # COWL (sous-module Git)
└── build/                    # Répertoire de build (généré)
```

### Workflow de Compilation

```
owlFunctional.chrpp
        ↓ (chrppc compiler)
    owl.cpp
        ↓ (g++ -std=c++17)
  ParserProject (executable)
```

## 🧪 Tests

Le projet inclut un système de tests intégré qui vérifie les inférences et requêtes OWL 2.

Voir les rapports d'analyse détaillés :
- [RAPPORT_FINAL_TESTS_APRES_CORRECTIONS.md](RAPPORT_FINAL_TESTS_APRES_CORRECTIONS.md)
- [DIAGNOSTIC_FINAL_QUERIES.md](DIAGNOSTIC_FINAL_QUERIES.md)

## 📊 Génération des Résultats de Référence (Pellet)

Pour comparer les résultats du raisonneur CHR++ avec Pellet, utilisez les commandes suivantes depuis le dossier `owl2bench/` :

### Classification (CT) - Hiérarchie des classes

```bash
java -jar "Experiments/java runnable jar files/pellet.jar" OWL2RL-11.owl classification > classification_results.txt
```

### Réalisation (CR) - Types des individus

```bash
java -jar "Experiments/java runnable jar files/pellet.jar" OWL2RL-11.owl realisation > realisation_results.txt
```

### Consistency Check

```bash
java -jar "Experiments/java runnable jar files/pellet.jar" OWL2RL-11.owl consistency
```

## 🔍 Comparaison des Résultats

### Classification (CT) - compare_classification.py

Compare les résultats de classification (hiérarchie des classes) entre CHR++ et Pellet :

```bash
python3 compare_classification.py <fichier_chrpp> <fichier_pellet>

# Exemple :
python3 compare_classification.py res_classification classification_pellet_OWL2RL-11.txt
```

### Réalisation (CR) - compare_instances.py

Compare les résultats de réalisation (instances des classes) entre CHR++ et Pellet :

```bash
python3 compare_instances.py <fichier_chrpp> <dossier_pellet>

# Exemple :
python3 compare_instances.py build/sortie.txt ../../../owl2bench/sparql_reference_results/pellet_results/OWL2RL-11
```

### Requêtes SPARQL - compare_query_results.py

Compare les résultats des requêtes SPARQL entre CHR++ et Pellet :

```bash
python3 compare_query_results.py <fichier_sortie_chrpp> <dossier_pellet_results>

# Exemple :
python3 compare_query_results.py sortie.txt ../../../owl2bench/sparql_reference_results/pellet_results/OWL2RL-11
```

## 📚 Documentation

### Règles CHR++ Principales

Les règles sont définies dans `owlFunctional.chrpp` et incluent :

```chrpp
// Transitivité SubClassOf
owlSubclassOf(A,B), owlSubclassOf(B,C) ==> owlSubclassOf(A,C);;

// Inférence SubClassOf → ClassAssertion
owlSubclassOf(A,B), owlClassAssertion(X,A,true) ==> owlClassAssertion(X,B,true);;

// IntersectionOf
owlIntersectionClass(C1,Component,_), owlSubclassOf(C2,C1) ==> owlSubclassOf(C2,Component);;

// ObjectSomeValuesFrom (∃P.C)
owlObjectSomeValuesFrom(C,P,Y), owlObjectPropertyAssertion(U,P,V), owlClassAssertion(V,Y,true) 
    ==> owlClassAssertion(U,C,true);;
```

## 🔧 Développement

### Modifier les Règles CHR++

1. Éditez `owlFunctional.chrpp`
2. Recompilez avec `make` (régénère automatiquement `owl.cpp`)
3. Testez avec vos ontologies

### Ajouter une Nouvelle Requête

```chrpp
// Dans owlFunctional.chrpp

// 1. Déclarer la contrainte
<chr_constraint>
    myNewQuery(+std::string)
</chr_constraint>

// 2. Ajouter la règle passive pour éviter les duplications
myNewQuery(X) #passive \ myNewQuery(X) <=> true ;;

// 3. Implémenter la logique de la requête
myNewQuery(URI), logicalName(URI,X) ==> 
    // Votre logique ici
    res(someResult) ;;
```

