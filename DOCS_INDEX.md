# 📚 Documentation ParserProject - Index

Bienvenue dans la documentation de ParserProject ! Ce fichier répertorie tous les documents disponibles.

---

## 🎯 Documents Principaux

### 📖 [README.md](README.md)
**Description du projet et guide de démarrage rapide**
- Vue d'ensemble du projet
- Fonctionnalités principales
- Installation rapide
- Exemples d'utilisation
- Architecture du projet
- Tests et résultats

👉 **Commencez ici si vous découvrez le projet**

---

### 📦 [INSTALL.md](INSTALL.md)
**Guide d'installation détaillé**
- Prérequis système complets
- Installation pas à pas des dépendances
- Configuration de CHR++
- Compilation du projet
- Vérification de l'installation
- Dépannage (troubleshooting)

👉 **Consultez ce document pour installer le projet**

---

### 🔧 [DEPENDENCIES.md](DEPENDENCIES.md)
**Liste complète des dépendances**
- CHR++ (compilateur)
- COWL (bibliothèque OWL 2)
- uLib (structures de données)
- Outils de compilation (CMake, GCC, Make)
- Bibliothèques standard C++
- Scripts de vérification

👉 **Pour comprendre toutes les dépendances nécessaires**

---

### 🤝 [CONTRIBUTING.md](CONTRIBUTING.md)
**Guide pour les contributeurs**
- Code de conduite
- Standards de code (C++ et CHR++)
- Workflow Git et branches
- Conventions de commit
- Processus de review
- Comment ajouter des tests

👉 **Lisez ceci avant de contribuer au projet**

---

### 📄 [LICENSE](LICENSE)
**Licence du projet (MIT)**
- Conditions d'utilisation
- Droits et restrictions
- Garanties

---

## 📊 Rapports d'Analyse

### 🔍 [RAPPORT_FINAL_TESTS_APRES_CORRECTIONS.md](RAPPORT_FINAL_TESTS_APRES_CORRECTIONS.md)
**Analyse détaillée des tests après corrections**
- Résultats de chaque test (1-8)
- Améliorations apportées
- Problèmes persistants
- Solutions proposées (matérialisation, etc.)
- Score global : 79%

---

### 🧪 [DIAGNOSTIC_FINAL_QUERIES.md](DIAGNOSTIC_FINAL_QUERIES.md)
**Diagnostic approfondi des queries**
- Analyse de querySubClassOf (échec)
- Analyse de queryClassification (échec)
- Cause racine identifiée (propagation CHR++)
- 3 solutions proposées
- Recommandation : matérialisation transitive

---

### 📈 [ANALYSE_DETAILLEE_QUERIES.md](ANALYSE_DETAILLEE_QUERIES.md)
**Analyse détaillée de chaque query**
- Hypothèses sur les causes d'échec
- Tests diagnostiques proposés
- Solutions par query
- Recommandations prioritaires

---

### 📝 [RESUME_VISUEL_TESTS.md](RESUME_VISUEL_TESTS.md)
**Résumé visuel des résultats de tests**
- Tableaux récapitulatifs
- Graphiques de réussite
- Vue d'ensemble colorée
- Statut par test

---

## 🗂️ Fichiers de Configuration

### ⚙️ [CMakeLists.txt](CMakeLists.txt)
**Configuration CMake du projet**
- Définition des chemins CHR++
- Compilation de owl.cpp depuis owlFunctional.chrpp
- Intégration de COWL
- Flags de compilation C++17

---

### 🔨 [Makefile](Makefile)
**Makefile principal**
- Cibles de compilation
- Nettoyage
- Build automatique

---

### 🚫 [.gitignore](.gitignore)
**Fichiers exclus du versioning Git**
- Fichiers de build
- Exécutables générés
- Fichiers temporaires
- Dossiers IDE

---

## 📁 Code Source

### 💎 [owlFunctional.chrpp](owlFunctional.chrpp)
**Fichier principal des règles CHR++**
- Définition des contraintes OWL 2
- Règles d'inférence
- Queries (querySuperClassOf, querySubClassOf, etc.)
- Gestion des types de données
- ~770 lignes

---

### 🦉 [parsercowl.h](parsercowl.h) / [parsercowl.cpp](parsercowl.cpp)
**Wrapper C++ pour COWL**
- Interface avec la bibliothèque COWL
- Parsing d'ontologies OWL 2
- Conversion axiomes → contraintes CHR++

---

### 📋 [Parser.h](Parser.h)
**Interface générique de parsing**
- Classe abstraite Parser
- Template pour différents types

---

### 🔤 [AnySimpleType.h](AnySimpleType.h)
**Système de types XSD**
- Hiérarchie de types de données
- Types : string, integer, float, boolean, dateTime, etc.
- Vérification de compatibilité

---

### 📝 [stringType.h](stringType.h)
**Utilitaires pour chaînes de caractères**
- Gestion des chaînes
- Types personnalisés

---

## 🧪 Fichiers de Test

### 📖 [example2.ofn](example2.ofn)
**Ontologie de test principale**
- Classes : Student, Professor, Course, Learner, PhDStudent
- Propriétés : enrolledIn, teaches, hasAge, fullName
- Individus : Alice, Bob, Math101
- Axiomes complexes : IntersectionOf, DisjointClasses, etc.

---

### 🍕 [example_pizza.owl](example_pizza.owl)
**Ontologie Pizza (format RDF/XML)**
- Exemple classique d'ontologie OWL

---

### 📄 [example1.rdf](example1.rdf)
**Exemple simple en RDF/XML**

---

## 🚀 Scripts Utiles

### Installation Automatique
```bash
# Script d'installation (à créer)
./install_all.sh
```

### Vérification des Dépendances
```bash
# Script de vérification (à créer)
./check_dependencies.sh
```

### Compilation et Test
```bash
# Compiler
make

# Tester
./build/ParserProject example2.ofn

# Voir les résultats
./build/ParserProject 2>&1 | grep "TEST"
```

---

## 📚 Documentation Externe

### CHR++
- [Documentation officielle CHR++](http://chr.pl/)
- [Guide des règles de contraintes](http://chr.pl/guide/)

### COWL
- [Repository GitHub COWL](https://github.com/sisinflab-swot/cowl)
- [Documentation API COWL](https://sisinflab-swot.github.io/cowl/)

### OWL 2
- [Spécification OWL 2](https://www.w3.org/TR/owl2-overview/)
- [OWL 2 Functional Syntax](https://www.w3.org/TR/owl2-syntax/)
- [OWL 2 Primer](https://www.w3.org/TR/owl2-primer/)

### C++
- [cppreference.com](https://en.cppreference.com/)
- [C++17 Features](https://en.cppreference.com/w/cpp/17)

---

## 🗺️ Organisation de la Documentation

```
ParserProject/
├── 📖 README.md                                    ← Commencez ici
├── 📦 INSTALL.md                                   ← Installation
├── 🔧 DEPENDENCIES.md                              ← Dépendances
├── 🤝 CONTRIBUTING.md                              ← Contribution
├── 📚 DOCS_INDEX.md                                ← Ce fichier
├── 📄 LICENSE                                      ← Licence
│
├── 📊 Rapports d'Analyse/
│   ├── RAPPORT_FINAL_TESTS_APRES_CORRECTIONS.md
│   ├── DIAGNOSTIC_FINAL_QUERIES.md
│   ├── ANALYSE_DETAILLEE_QUERIES.md
│   └── RESUME_VISUEL_TESTS.md
│
├── 🗂️ Configuration/
│   ├── CMakeLists.txt
│   ├── Makefile
│   └── .gitignore
│
├── 💎 Code Source/
│   ├── owlFunctional.chrpp
│   ├── parsercowl.h/.cpp
│   ├── Parser.h
│   ├── AnySimpleType.h
│   └── stringType.h
│
└── 🧪 Tests/
    ├── example2.ofn
    ├── example_pizza.owl
    └── example1.rdf
```

---

## 🔍 Navigation Rapide

### Pour les Nouveaux Utilisateurs
1. [README.md](README.md) - Vue d'ensemble
2. [INSTALL.md](INSTALL.md) - Installation
3. Tester avec `./build/ParserProject`

### Pour les Développeurs
1. [CONTRIBUTING.md](CONTRIBUTING.md) - Standards de code
2. [owlFunctional.chrpp](owlFunctional.chrpp) - Code source principal
3. [DIAGNOSTIC_FINAL_QUERIES.md](DIAGNOSTIC_FINAL_QUERIES.md) - Problèmes connus

### Pour les Chercheurs
1. [RAPPORT_FINAL_TESTS_APRES_CORRECTIONS.md](RAPPORT_FINAL_TESTS_APRES_CORRECTIONS.md) - Résultats
2. [ANALYSE_DETAILLEE_QUERIES.md](ANALYSE_DETAILLEE_QUERIES.md) - Analyse technique
3. [example2.ofn](example2.ofn) - Ontologie de test

---

## 📞 Support

### Questions ?
- 💬 [GitHub Discussions](https://github.com/arigraphitech/owlChrpp/discussions)
- 🐛 [Issues GitHub](https://github.com/arigraphitech/owlChrpp/issues)

### Contributions ?
- 🤝 Consultez [CONTRIBUTING.md](CONTRIBUTING.md)
- 🔧 Créez une Pull Request

---

**Dernière mise à jour** : 7 décembre 2025  
**Version de la documentation** : 1.0
