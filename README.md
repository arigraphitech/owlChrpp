# owl2chr - Moteur de raisonnement déclaratif pour OWL 2 RL basé sur CHR++

owl2chr est un moteur de raisonnement déclaratif pour OWL 2 RL basé sur CHR++ (Constraint Handling Rules) et la bibliothèque COWL pour le parsing d'ontologies.

## Description

Ce projet implémente un moteur d'inférence et de raisonnement pour les ontologies OWL 2 (Web Ontology Language). Il combine :
- **CHR++** : Système de règles de contraintes pour l'inférence logique
- **COWL** : Bibliothèque C de parsing d'ontologies OWL 2
- **Queries** : Système de requêtes pour interroger les ontologies

### Fonctionnalités

#### Inférences OWL 2 Supportées

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

#### Système de Requêtes

1. **querySuperClassOfUri(URI)** - Récupère toutes les superclasses d'une classe (incluant owl:Thing)
2. **querySubClassOfUri(URI)** - Récupère toutes les sous-classes d'une classe
3. **queryClassificationUri(URI)** - Récupère toutes les classes dont un individu est instance
4. **queryInstanceURI(IndividualURI, ClassURI)** - Vérifie si un individu est instance d'une classe
5. **queryInstancesURI(ClassURI)** - Liste tous les individus d'une classe

## Installation

Voir [INSTALL.md](INSTALL.md) pour les instructions détaillées d'installation.

### Prérequis

- **CMake** ≥ 3.14
- **GCC/G++** avec support C++17
- **Git**
- **COWL** (bibliothèque OWL 2 - incluse en sous-module)
- **CHR++** *(optionnel)* : uniquement si vous modifiez `owlFunctional.chrpp` (le fichier `owl.cpp` pré-généré est fourni)

### Installation Rapide

```bash
# Cloner le dépôt avec les sous-modules
git clone --recursive https://github.com/arigraphitech/owlChrpp.git
cd owlChrpp

# Construire (owl.cpp est pré-généré, CHR++ non requis)
mkdir -p build && cd build
cmake ..
make

# Exécuter (depuis la racine du projet)
./build/ParserProject results/OWL2RL-11.ofn
```

## Utilisation

### Exécution Basique

```bash
./build/ParserProject [fichier_ontologie.ofn]
```

Si aucun fichier n'est spécifié, `results/OWL2RL-1.ofn` est utilisé par défaut (valeur codée dans `main()`).

### Ontologies de Test

Le projet inclut des ontologies de test dans `results/` :
- **OWL2RL-1.ofn** à **OWL2RL-11.ofn** : Ontologies de benchmark OWL2Bench

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
ParserCowl<OWL2> parser("results/OWL2RL-11.ofn", *space);
parser.load();

// Requêtes disponibles (décommenter dans main())
space->querySuperClassOfUri("https://kracr.iiitd.edu.in/OWL2Bench#Student");
space->queryInstancesURI("https://kracr.iiitd.edu.in/OWL2Bench#Faculty");
space->realisation();
space->classification();
```

## Architecture

### Structure du Projet

```
owlChrpp/
owlFunctional.chrpp      # Règles CHR++ (fichier principal)
parsercowl.h              # Parser COWL pour OWL 2
Parser.h                  # Interface de parsing générique
AnySimpleType.h           # Types de données XSD
CMakeLists.txt            # Configuration CMake
results/                  # Ontologies de test OWL2Bench
lib/cowl/                 # COWL (sous-module Git)
build/                    # Répertoire de build (généré)
```

### Workflow de Compilation

```
owlFunctional.chrpp
        ↓ (chrppc - optionnel, make generate_owl_cpp)
    owl.cpp  ← pré-généré et commité dans le dépôt
        ↓ (g++ -std=c++17)
  build/ParserProject (executable)
```

## Tests et Benchmarks

Le projet inclut un système de tests pour comparer les résultats du raisonneur CHR++ avec le raisonneur de référence Pellet.

### Lancer les Tests CHR++

Les tests sont configurés dans la fonction `main()` du fichier `owlFunctional.chrpp`. Pour activer un test, décommentez la ligne correspondante :

#### Classification (CT) - Hiérarchie des classes

```cpp
// Dans owlFunctional.chrpp, décommentez :
space->classification();
```

Génère le fichier `res_classification` contenant toutes les paires SubClassOf inférées.

#### Réalisation (CR) - Types des individus

```cpp
// Dans owlFunctional.chrpp, décommentez :
space->realisation();
```

Génère les types inférés pour chaque individu.

#### Requêtes SPARQL

```cpp
// Dans owlFunctional.chrpp, décommentez les requêtes souhaitées :
space->queryObjAssertionUri(std::string("https://kracr.iiitd.edu.in/OWL2Bench#isMemberOf"));
space->queryObjAssertionUri(std::string("https://kracr.iiitd.edu.in/OWL2Bench#isPartOf"));
space->queryDataAssertionUri(std::string("https://kracr.iiitd.edu.in/OWL2Bench#hasAge"));
space->queryInstancesURI(std::string("https://kracr.iiitd.edu.in/OWL2Bench#T20CricketFan"));
space->queryObjAssertionUri(std::string("https://kracr.iiitd.edu.in/OWL2Bench#hasSameHomeTownWith"));
// ... etc.
```

Les résultats sont écrits dans `sortie.txt`.

### Recompiler et Exécuter

```bash
cd build && make
./build/ParserProject results/OWL2RL-11.ofn
```

## Génération des Résultats de Référence (Pellet + Jena)

Les résultats de référence ont été générés avec **Pellet** (raisonneur OWL) et **Apache Jena** (requêtes SPARQL).

### Classification (CT) - Pellet

Le fichier JAR Pellet original (`owl2bench/Experiments/java runnable jar files/pellet.jar`) a été modifié pour afficher les résultats de classification.

**Modification apportée** dans `Pellet.java` :

```java
else if(task.matches("classification")) {
    reasoner.precomputeInferences(InferenceType.CLASS_HIERARCHY);
    // Afficher les paires SubClassOf inférées
    for (OWLClass cls : ontology.getClassesInSignature()) {
        for (OWLClass superCls : reasoner.getSuperClasses(cls, false).getFlattened()) {
            System.out.println(cls + " SubClassOf " + superCls);
        }
    }
}
```

**Recompilation avec Maven** :

```bash
cd owl2bench/Experiments/java\ runnable\ jar\ files/Java\ codes\ of\ the\ runnable\ jars/pellet2/
mvn clean package -DskipTests
cp target/pellet2-1.0-SNAPSHOT-jar-with-dependencies.jar ../../pellet.jar
```

**Exécution** :

```bash
cd owl2bench/
java -jar "Experiments/java runnable jar files/pellet.jar" OWL2RL-11.owl classification > classification_pellet.txt
```

### Réalisation (CR) - Pellet

```bash
java -jar "Experiments/java runnable jar files/pellet.jar" OWL2RL-11.owl realisation > realisation_pellet.txt
```

### Requêtes SPARQL - Apache Jena + Pellet

Les résultats de référence des requêtes SPARQL ont été générés avec Apache Jena en utilisant Pellet comme raisonneur.

**Fichiers de requêtes SPARQL** : `owl2bench/Queries/OWL2RL/*.sparql`

**Résultats Pellet** : `owl2bench/sparql_reference_results/pellet_results/OWL2RL-11/`

Les fichiers de résultats sont nommés `OWL2RL-11_queryXX.txt` où XX correspond au numéro de la requête SPARQL.

### Consistency Check

```bash
java -jar "Experiments/java runnable jar files/pellet.jar" OWL2RL-11.owl consistency
```

## Comparaison des Résultats

### Classification (CT) - compare_classification.py

Compare les résultats de classification (hiérarchie des classes) entre CHR++ et Pellet :

```bash
python3 compare_classification.py <fichier_chrpp> <fichier_pellet_reference>
```

### Réalisation (CR) - compare_instances.py

Compare les résultats de réalisation (instances des classes) entre CHR++ et Pellet :

```bash
python3 compare_instances.py <fichier_chrpp> <fichier_gold>
```

### Requêtes SPARQL - compare_query_results.py

Compare les résultats des requêtes SPARQL entre CHR++ et Pellet :

```bash
python3 compare_query_results.py <fichier_sortie_chrpp> <dossier_pellet_results>

# Exemple :
python3 compare_query_results.py sortie.txt ../../../owl2bench/sparql_reference_results/pellet_results/OWL2RL-11
```

## Documentation

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

## Développement

### Modifier les Règles CHR++

1. Éditez `owlFunctional.chrpp`
2. Régénérez `owl.cpp` (nécessite CHR++) : `make generate_owl_cpp`
3. Recompilez l'exécutable : `make ParserProject`
4. Committez `owl.cpp` mis à jour si vous partagez vos modifications

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

