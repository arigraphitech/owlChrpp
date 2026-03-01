# Dépendances du Projet owlChrpp (owl2chr)

Ce document liste toutes les dépendances nécessaires pour compiler et exécuter owlChrpp.

---

## Dépendances Principales

### 1. CHR++ (Constraint Handling Rules++)

**Version** : v3171db7 (ou version compatible)  
**Licence** : [À vérifier selon votre version CHR++]  
**Description** : Compilateur et runtime pour les règles de contraintes CHR++

**Composants utilisés** :
- **chrppc** : Compilateur qui transforme `.chrpp` → `.cpp`
- **runtime** : Bibliothèque d'exécution des règles CHR++

**Installation** :
```
<répertoire-chrpp>/
    chrppc/chrppc      # Exécutable du compilateur
    runtime/           # Headers et runtime
```

**Utilisation dans le projet** (configurable sans modifier le code) :
```bash
# Chemin par défaut : ../chrpp (à côté du projet)
cmake ..

# Ou spécifier le chemin :
cmake -DCHRPP_ROOT=/chemin/vers/chrpp ..
```

**Lien** : [CHR++ Documentation](http://chr.pl/)

---

### 2. COWL (C Ontology Web Language)

**Version** : Incluse comme sous-module Git  
**Licence** : MIT  
**Repository** : [https://github.com/sisinflab-swot/cowl](https://github.com/sisinflab-swot/cowl)

**Description** : Bibliothèque C pour parser et manipuler des ontologies OWL 2

**Composants utilisés** :
- **cowl.h** : API principale de parsing OWL 2
- **uLib** : Bibliothèque de structures de données (incluse avec COWL)

**Installation** :
```bash
# Inclus comme sous-module Git
git submodule update --init --recursive
```

**Formats supportés** :
- OWL 2 Functional Syntax (.ofn)
- RDF/XML (.owl, .rdf)
- Turtle (.ttl)
- N-Triples (.nt)

**Utilisation dans le projet** :
```cmake
add_subdirectory(lib/cowl EXCLUDE_FROM_ALL)
target_link_libraries(ParserProject PRIVATE cowl)
```

---

### 3. uLib (Micro Library)

**Version** : Incluse avec COWL  
**Licence** : MIT  
**Description** : Bibliothèque de structures de données efficaces

**Structures utilisées** :
- `ulib_uint` : Entiers non signés
- `UVec` : Vecteurs dynamiques
- `UHash` : Tables de hachage
- `UString` : Gestion de chaînes

**Installation** : Automatique avec COWL

**Utilisation** :
```cpp
#include <cowl.h>  // Inclut aussi uLib
```

---

## Outils de Compilation

### 1. CMake

**Version minimale** : 3.14  
**Version recommandée** : 3.20+  
**Licence** : BSD-3-Clause

**Fonctionnalités utilisées** :
- Génération de Makefiles
- Gestion des dépendances
- Custom commands pour chrppc
- Subdirectories (COWL)

**Installation** :
```bash
# Ubuntu/Debian
sudo apt install cmake

# Fedora
sudo dnf install cmake

# macOS
brew install cmake
```

**Documentation** : [https://cmake.org/documentation/](https://cmake.org/documentation/)

---

### 2. GCC/G++ (GNU Compiler Collection)

**Version minimale** : 9.0 (support C++17)  
**Version recommandée** : 11.0+  
**Licence** : GPL-3.0

**Standards C++ utilisés** :
- **C++17** : `std::optional`, `if constexpr`, structured bindings
- Features requises :
  - `<filesystem>`
  - `std::string_view`
  - `std::shared_ptr` avec type erasure
  - Lambda expressions
  - Template metaprogramming

**Installation** :
```bash
# Ubuntu/Debian
sudo apt install build-essential g++

# Vérifier la version
g++ --version
```

**Flags de compilation utilisés** :
```cmake
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wpedantic)
```

---

### 3. GNU Make

**Version minimale** : 4.0  
**Version recommandée** : 4.3+  
**Licence** : GPL-3.0

**Installation** :
```bash
# Ubuntu/Debian
sudo apt install make

# Vérifier
make --version
```

---

### 4. Git

**Version minimale** : 2.20  
**Version recommandée** : 2.30+  
**Licence** : GPL-2.0

**Fonctionnalités utilisées** :
- Gestion des sous-modules (`git submodule`)
- Clone récursif (`--recursive`)

**Installation** :
```bash
# Ubuntu/Debian
sudo apt install git
```

---

## Bibliothèques Standard C++

### STL (Standard Template Library)

**Composants utilisés** :

#### Conteneurs
```cpp
#include <vector>      // std::vector
#include <string>      // std::string
#include <set>         // std::set
#include <map>         // std::map (implicite via CHR++)
```

#### Algorithmes
```cpp
#include <algorithm>   // std::find, std::sort, std::next
```

#### Utilitaires
```cpp
#include <memory>      // std::shared_ptr, std::unique_ptr
#include <iostream>    // std::cout, std::cerr
```

#### C++17 Spécifique
```cpp
#include <optional>    // std::optional (CHR++)
#include <string_view> // std::string_view (CHR++)
```

---

## Dépendances Projet-Spécifiques

### 1. AnySimpleType (Inclus)

**Fichier** : `AnySimpleType.h`  
**Description** : Système de types pour les valeurs de données XSD

**Types supportés** :
- `xsd:string`
- `xsd:integer`
- `xsd:float`, `xsd:double`
- `xsd:boolean`
- `xsd:dateTime`
- Et autres types XSD

**Hiérarchie** :
```
AnySimpleType (base)
StringType
IntegerType
FloatType
DoubleType
BooleanType
DateTimeType
```

---

### 2. ParserCowl (Inclus)

**Fichiers** : `parsercowl.h`, `parsercowl.cpp`  
**Description** : Wrapper C++ pour l'API C de COWL

**Fonctionnalités** :
- Parsing d'ontologies OWL 2
- Conversion COWL → CHR++ constraints
- Gestion des types de données
- Itérateurs sur axiomes

---

### 3. Parser (Interface)

**Fichier** : `Parser.h`  
**Description** : Interface générique de parsing

```cpp
template <typename T>
class Parser {
public:
    virtual void load() = 0;
    virtual ~Parser() = default;
};
```

---

## Résumé des Dépendances

### Dépendances Obligatoires

| Nom | Version | Type | Statut |
|-----|---------|------|--------|
| **CHR++** | v3171db7+ | Compilateur |  Externe |
| **COWL** | Latest | Bibliothèque |  Sous-module |
| **uLib** | Latest | Bibliothèque |  Avec COWL |
| **CMake** | ≥ 3.14 | Outil |  À installer |
| **GCC/G++** | ≥ 9.0 | Compilateur |  À installer |
| **Make** | ≥ 4.0 | Outil |  À installer |
| **Git** | ≥ 2.20 | Outil |  À installer |

### Dépendances Incluses

| Nom | Description | Fichier |
|-----|-------------|---------|
| **AnySimpleType** | Système de types XSD | `AnySimpleType.h` |
| **ParserCowl** | Wrapper COWL | `parsercowl.h/.cpp` |
| **Parser** | Interface générique | `Parser.h` |
| **stringType** | Utilitaires chaînes | `stringType.h` |

---

## Vérification des Dépendances

### Script de Vérification

Créez un fichier `check_dependencies.sh` :

```bash
#!/bin/bash

echo "=== Vérification des Dépendances owlChrpp ==="
echo ""

# Fonction de vérification
check_cmd() {
    if command -v $1 &> /dev/null; then
        echo " $1: $(command -v $1)"
        $1 --version 2>&1 | head -1
    else
        echo " $1: NON TROUVÉ"
        return 1
    fi
    echo ""
}

# Vérifier les commandes
check_cmd cmake
check_cmd gcc
check_cmd g++
check_cmd make
check_cmd git

# Vérifier CHR++
echo "=== CHR++ ==="
CHRPP_ROOT="${CHRPP_ROOT:-$(pwd)/../chrpp}"
if [ -f "$CHRPP_ROOT/chrppc/chrppc" ]; then
    echo "CHR++ trouvé: $CHRPP_ROOT/chrppc/chrppc"
else
    echo "CHR++ non trouvé. Chercher avec: find ~ -name chrppc 2>/dev/null"
    echo "Puis: cmake -DCHRPP_ROOT=/chemin/vers/chrpp .."
fi
echo ""

# Vérifier COWL
echo "=== COWL ==="
if [ -d "lib/cowl" ] && [ "$(ls -A lib/cowl)" ]; then
    echo " COWL présent (sous-module)"
else
    echo " COWL manquant ou vide"
    echo "   Exécuter: git submodule update --init --recursive"
fi
echo ""

# Vérifier C++17
echo "=== Support C++17 ==="
echo '#include <iostream>' > /tmp/test_cpp17.cpp
echo 'int main() { if constexpr (true) { std::cout << "C++17 OK"; } }' >> /tmp/test_cpp17.cpp
if g++ -std=c++17 /tmp/test_cpp17.cpp -o /tmp/test_cpp17 2>/dev/null; then
    echo " Support C++17 confirmé"
    /tmp/test_cpp17
    rm /tmp/test_cpp17 /tmp/test_cpp17.cpp
else
    echo " Support C++17 non disponible"
fi
echo ""

echo "=== Fin de la Vérification ==="
```

Exécutez-le :
```bash
chmod +x check_dependencies.sh
./check_dependencies.sh
```

---

## Installation Automatisée

### Script d'Installation Complet

Créez `install_all.sh` :

```bash
#!/bin/bash
set -e

echo "=== Installation Automatique owlChrpp ==="

# 1. Installer les outils système
echo " Installation des outils système..."
sudo apt update
sudo apt install -y build-essential cmake git

# 2. Cloner le projet
echo " Clonage du projet..."
git clone --recursive https://github.com/arigraphitech/owlChrpp.git owlChrpp
cd owlChrpp

# 3. Vérifier les sous-modules
echo " Vérification des sous-modules..."
git submodule update --init --recursive

# 4. Compiler
echo " Compilation..."
mkdir -p build && cd build
cmake ..
make -j$(nproc)

# 5. Test
echo " Test de l'installation..."
./ParserProject ../results/OWL2RL-1.ofn

echo ""
echo "=== Installation Terminée ! ==="
echo "Exécutable: $(pwd)/ParserProject"
```

---

## Liens Utiles

- **CHR++** : [http://chr.pl/](http://chr.pl/)
- **COWL** : [https://github.com/sisinflab-swot/cowl](https://github.com/sisinflab-swot/cowl)
- **CMake** : [https://cmake.org/](https://cmake.org/)
- **GCC** : [https://gcc.gnu.org/](https://gcc.gnu.org/)
- **OWL 2** : [https://www.w3.org/TR/owl2-overview/](https://www.w3.org/TR/owl2-overview/)

---

**Dernière mise à jour** : 7 décembre 2025
