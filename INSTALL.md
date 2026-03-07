# Guide d'Installation - owlChrpp (owl2chr)

Ce guide détaille l'installation complète de owlChrpp / owl2chr, un moteur de raisonnement déclaratif pour OWL 2 RL basé sur CHR++.

## Table des Matières

1. [Prérequis Système](#prérequis-système)
2. [Installation des Dépendances](#installation-des-dépendances)
3. [Installation de CHR++](#installation-de-chr)
4. [Installation du Projet](#installation-du-projet)
5. [Vérification de l'Installation](#vérification-de-linstallation)
6. [Dépannage](#dépannage)

---

## Prérequis Système

### Systèmes d'Exploitation Supportés

- **Linux** (Ubuntu 20.04+, Debian 10+, Fedora 32+)
- **macOS** 10.15+ (Catalina ou plus récent)
- **Windows** (via WSL2 recommandé)

### Logiciels Requis

| Logiciel | Version Minimale | Version Recommandée |
|----------|------------------|---------------------|
| **CMake** | 3.14 | 3.20+ |
| **GCC/G++** | 9.0 (C++17) | 11.0+ |
| **Git** | 2.20 | 2.30+ |
| **Make** | 4.0 | 4.3+ |

---

## Installation des Dépendances

### Ubuntu / Debian

```bash
sudo apt update && sudo apt upgrade -y
sudo apt install -y build-essential cmake git

# Vérifier les versions
gcc --version      # Doit être ≥ 9.0
cmake --version    # Doit être ≥ 3.14
```

### Fedora / Red Hat / CentOS

```bash
sudo dnf groupinstall "Development Tools" -y
sudo dnf install cmake git -y
```

### macOS

```bash
brew install cmake git gcc
```

### Windows (WSL2)

```bash
wsl --install -d Ubuntu
# Dans WSL2, suivre les instructions Ubuntu ci-dessus
```

---

## Installation de CHR++

CHR++ fournit deux composants :
1. **Runtime** (headers : `chrpp.hh`, `logical_var.hpp`, etc.) → nécessaire pour compiler `owl.cpp`
2. **Compilateur `chrppc`** → nécessaire pour régénérer `owl.cpp` après modification de `owlFunctional.chrpp`

### Version requise

> **Important** : ce projet requiert CHR++ **commit `a9ebc45` ou ultérieur** (correctif de génération de gardes, 2 février 2026).
> La branche `master` actuelle (`v1.7.0-44` ou plus récente) convient.
> Les versions antérieures à ce commit génèrent des gardes incorrectes et produisent des résultats d'inférence erronés.

### Étape 1 : Cloner CHR++

Cloner CHR++ dans le **dossier parent** du projet (ou n'importe où, en définissant `CHRPP_ROOT`) :

```bash
# Recommandé : à côté du projet owlChrpp
cd ~/projets
git clone https://gitlab.com/vynce/chrpp.git
cd chrpp

# Vérifier la version (doit être >= a9ebc45)
git log --oneline -3
```

### Étape 2 : Compiler CHR++ en in-source

CHR++ **doit être compilé en in-source** (cmake directement dans le dossier chrpp, sans sous-dossier `build/`) pour que `chrppc` soit accessible au bon chemin (`chrpp/chrppc/chrppc`) :

```bash
cd ~/projets/chrpp

# Compilation in-source (IMPORTANT : ne pas créer de sous-dossier build/)
cmake .
make
```

**Vérifier que chrppc est bien généré** :
```bash
ls chrppc/chrppc
# Doit afficher : chrppc/chrppc
```

### Étape 3 : Configurer CHRPP_ROOT

Si CHR++ n'est **pas** dans le dossier `../chrpp` par rapport au projet, définir la variable d'environnement :

```bash
# Ajouter dans ~/.bashrc
export CHRPP_ROOT=/chemin/absolu/vers/chrpp
source ~/.bashrc
```

Le CMakeLists cherche chrppc dans cet ordre :
1. `$CHRPP_ROOT/chrppc/chrppc`
2. `../chrpp/chrppc/chrppc` (chemin par défaut, relatif au projet)

---

## Installation du Projet

### 1. Cloner le Repository

```bash
git clone --recurse-submodules https://github.com/arigraphitech/owlChrpp.git
cd owlChrpp

# Si les sous-modules ne sont pas initialisés :
git submodule sync --recursive
git submodule update --init --recursive
```

### 2. Configurer et Compiler

```bash
# Configurer (Release avec -O3 par défaut)
cmake -S . -B build

# Compiler (régénère automatiquement owl.cpp si owlFunctional.chrpp a changé)
cd build && make
```

Si `CHRPP_ROOT` n'est pas dans l'environnement, spécifier le chemin :
```bash
cmake -DCHRPP_ROOT=/chemin/vers/chrpp -S . -B build
cd build && make
```

**Sortie attendue** :
```
-- CHR++ trouvé: .../chrpp/chrppc/chrppc (régénération de owl.cpp possible)
-- Configuring done
...
[100%] Built target ParserProject
```

### Mode de compilation

Le projet compile en **Release avec -O3** par défaut. Pour forcer explicitement :
```bash
cmake -DCMAKE_BUILD_TYPE=Release -S . -B build
```

Pour un build de debug (sans optimisations, avec assertions) :
```bash
cmake -DCMAKE_BUILD_TYPE=Debug -S . -B build
```

---

## Vérification de l'Installation

### Test 1 : Exécutable Créé

```bash
ls -lh build/ParserProject
```

### Test 2 : Exécution avec Ontologie d'Exemple

```bash
# Lancer depuis la racine du projet (chemin relatif vers results/)
./build/ParserProject results/OWL2RL-1.ofn
```

**Sortie attendue** :
```
temps 0.XX
```

### Test 3 : Ontologie Plus Grande

```bash
./build/ParserProject results/OWL2RL-10.ofn
```

---

## Recompilation Après Modifications

### Modifier les Règles CHR++

```bash
# 1. Éditer owlFunctional.chrpp
nano owlFunctional.chrpp

# 2. Recompiler (owl.cpp régénéré automatiquement si chrppc est disponible)
cd build && make

# 3. Tester
cd ..
./build/ParserProject results/OWL2RL-1.ofn
```

### Nettoyage Complet

```bash
rm -rf build
cmake -S . -B build
cd build && make
```

---

## Dépannage

### Problème 1 : `chrppc non trouvé`

```
-- chrppc non trouvé - utilisation de owl.cpp pré-généré (lecture seule)
```

Cela signifie que `chrppc` n'est pas trouvé. Le projet compilera quand même avec `owl.cpp` pré-généré, mais les modifications de `owlFunctional.chrpp` n'auront aucun effet.

**Solutions** :
```bash
# Vérifier que chrppc existe
ls $CHRPP_ROOT/chrppc/chrppc

# Si absent, recompiler chrpp en in-source
cd /chemin/vers/chrpp
cmake .
make

# Puis reconfigurer
cmake -DCHRPP_ROOT=/chemin/vers/chrpp -S . -B build
cd build && make
```

### Problème 2 : Erreur "C++17 required"

```bash
sudo apt install g++-11
export CXX=g++-11 CC=gcc-11
```

### Problème 3 : Sous-module COWL vide

```
fatal error: cowl.h: No such file or directory
```

```bash
git submodule update --init --recursive
```

### Problème 4 : Plantage à l'exécution

```
Assertion `_backtrack_depth <= Backtrack::depth()' failed.
```

Cause probable : version de CHR++ trop ancienne (antérieure au commit `a9ebc45`).

```bash
cd /chemin/vers/chrpp
git log --oneline | grep "a9ebc45"
# Si absent, mettre à jour chrpp :
git pull
cmake .
make

# Régénérer owl.cpp et recompiler
cd /chemin/vers/owlChrpp/build
make
```

### Problème 5 : Sous-module COWL — erreur de linking uLib

```
undefined reference to `ulib_*`
```

```bash
cd lib/cowl && rm -rf build && mkdir build && cd build
cmake .. && make
cd ../../..
rm -rf build && cmake -S . -B build && cd build && make
```

### Problème 6 : Out of Memory pendant la Compilation

```bash
make -j2   # Réduire le parallélisme
```

---

## Arborescence Finale

```
<dossier-parent>/
    chrpp/                    # CHR++ (v1.7.0-44 ou plus récent, build in-source)
        chrppc/
            chrppc            # Compilateur CHR++
        runtime/              # Headers runtime CHR++

    owlChrpp/                 # Ce projet
        owlFunctional.chrpp   # Règles CHR++ (source principale)
        owl.cpp               # Généré par chrppc depuis owlFunctional.chrpp
        parsercowl.h          # Parser COWL
        CMakeLists.txt
        lib/
            cowl/             # Sous-module Git COWL
        build/                # Répertoire de build (généré)
            ParserProject     # Exécutable final
        results/              # Ontologies de test OWL2Bench
```

---

**Besoin d'aide ?** Ouvrez une issue sur [GitHub](https://github.com/arigraphitech/owlChrpp/issues).
