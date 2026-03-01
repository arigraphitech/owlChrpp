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
# Mettre à jour les paquets
sudo apt update && sudo apt upgrade -y

# Installer les outils de compilation
sudo apt install -y build-essential cmake git

# Vérifier les versions
gcc --version      # Doit être ≥ 9.0
g++ --version      # Doit être ≥ 9.0
cmake --version    # Doit être ≥ 3.14
git --version
make --version
```

### Fedora / Red Hat / CentOS

```bash
# Installer les outils de compilation
sudo dnf groupinstall "Development Tools" -y
sudo dnf install cmake git -y

# Vérifier les versions
gcc --version
cmake --version
```

### macOS

```bash
# Installer Homebrew si ce n'est pas déjà fait
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Installer les outils
brew install cmake git gcc

# Vérifier les versions
gcc --version
cmake --version
```

### Windows (WSL2)

```bash
# Activer WSL2 et installer Ubuntu
wsl --install -d Ubuntu

# Dans WSL2, suivre les instructions pour Ubuntu ci-dessus
```

---

## Installation de CHR++

CHR++ est le compilateur de règles de contraintes nécessaire pour le projet.

### Option 1 : Installation depuis les Sources (Recommandé)

```bash
# 1. Cloner ou télécharger CHR++ (idéalement à côté du projet)
# Structure recommandée : projet/ et chrpp/ dans le même dossier parent
git clone <url_chrpp_repository> chrpp
cd chrpp

# 2. Compiler CHR++
cd chrppc
make

# 3. Vérifier que le compilateur fonctionne
./chrppc --version
# ou
./chrppc --help

# 4. (Optionnel) Ajouter CHR++ au PATH ou définir CHRPP_ROOT
export CHRPP_ROOT=/chemin/absolu/vers/chrpp
# ou ajouter dans ~/.bashrc pour le conserver entre sessions :
echo 'export CHRPP_ROOT=/chemin/absolu/vers/chrpp' >> ~/.bashrc
source ~/.bashrc
```

### Option 2 : CHR++ Déjà Installé

Si CHR++ est déjà installé ailleurs sur votre système, notez le chemin complet :

```bash
# Trouver où est installé CHR++
which chrppc
# ou
find / -name chrppc 2>/dev/null
```

Vous devrez modifier `CMakeLists.txt` pour pointer vers ce chemin (voir section suivante).

---

## Installation du Projet

### 1. Cloner le Repository

```bash
# Cloner avec les sous-modules (COWL)
git clone --recursive https://github.com/arigraphitech/owlChrpp.git owlChrpp
cd owlChrpp

# Si vous avez déjà cloné sans --recursive :
git submodule update --init --recursive
```

### 2. Vérifier les Sous-Modules

```bash
# Vérifier que COWL est bien présent
ls -la lib/cowl/

# Vous devriez voir des fichiers dans lib/cowl/
# Si le dossier est vide, exécutez :
git submodule update --init --recursive
```

### 3. Configurer le Chemin de CHR++

Le chemin CHR++ se configure **sans modifier le code source**, via la variable cmake `CHRPP_ROOT`.

**Chemin par défaut** : `../chrpp` (à côté du projet). Si votre installation est ailleurs :

```bash
# Méthode A : variable cmake (recommandé)
cmake -DCHRPP_ROOT=/chemin/vers/chrpp ..

# Méthode B : variable d'environnement
export CHRPP_ROOT=/chemin/vers/chrpp
cmake ..
```

### 4. Créer le Répertoire de Build

```bash
mkdir -p build
cd build
```

### 5. Configurer avec CMake

```bash
# Si CHR++ est à ../chrpp (défaut) :
cmake ..

# Si CHR++ est ailleurs :
cmake -DCHRPP_ROOT=/chemin/vers/chrpp ..

# En mode Release (déjà le défaut) :
cmake -DCMAKE_BUILD_TYPE=Release ..
```

**Sortie attendue** :
```
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Configuring done
-- Generating done
-- Build files have been written to: .../build
```

### 6. Compiler le Projet

```bash
# Compilation avec Make
make

# Ou avec tous les cœurs disponibles :
make -j$(nproc)
```

**Étapes de compilation** :
1. **Génération de owl.cpp** : CHR++ compile `owlFunctional.chrpp` → `owl.cpp`
2. **Compilation de COWL** : Construction de la bibliothèque COWL
3. **Compilation de ParserProject** : Compilation finale de l'exécutable

**Sortie attendue** :
```
Génération de .../build/owl.cpp depuis .../owlFunctional.chrpp via chrppc
Scanning dependencies of target cowl
[ 10%] Building C object lib/cowl/...
...
[100%] Linking CXX executable ParserProject
[100%] Built target ParserProject
```

### 7. Retour au Répertoire Principal

```bash
cd ..
```

---

## Vérification de l'Installation

### Test 1 : Exécutable Créé

```bash
# Vérifier que l'exécutable existe
ls -lh build/ParserProject

# Doit afficher quelque chose comme :
# -rwxr-xr-x 1 user user 2.5M Dec 7 16:00 build/ParserProject
```

### Test 2 : Exécution avec Ontologie d'Exemple

```bash
# Exécuter avec le fichier par défaut (results/OWL2RL-1.ofn)
./build/ParserProject

# Ou spécifier un fichier :
./build/ParserProject results/OWL2RL-11.ofn
```

**Sortie attendue** :
```
temps 0.17
```
(Le temps d'exécution en secondes. Les résultats sont écrits dans `res_realisation`, `res_classification` ou `sortie.txt` selon les requêtes activées dans `main()`.)

### Test 3 : Comparer avec les Résultats Pellet

```bash
# Comparer la réalisation
python3 compare_instances.py res_realisation resultats_pellet_OWL2RL-11.txt

# Comparer la classification (nécessite d'activer classification() dans main())
python3 compare_classification.py res_classification classification_pellet_OWL2RL-11.txt
```

---

## Dépannage

### Problème 1 : CMake ne trouve pas CHR++

**Erreur** :
```
CMake Error: Could not find chrppc compiler
```

**Solution** :
1. Vérifier que CHR++ est bien installé et noter son chemin :
   ```bash
   find / -name chrppc -type f 2>/dev/null
   ```

2. Reconfigurer avec le bon chemin via variable cmake :
   ```bash
   cd build
   rm -rf *
   cmake -DCHRPP_ROOT=/chemin/vers/votre/chrpp ..
   ```

3. Ou via variable d'environnement :
   ```bash
   export CHRPP_ROOT=/chemin/vers/votre/chrpp
   cd build && rm -rf * && cmake ..
   ```

### Problème 2 : Erreur "C++17 required"

**Erreur** :
```
error: #error This file requires compiler and library support for the ISO C++ 2017 standard
```

**Solution** :
1. Vérifier la version de GCC :
   ```bash
   g++ --version
   ```
   
2. Si version < 9.0, installer une version plus récente :
   ```bash
   # Ubuntu
   sudo apt install g++-11
   
   # Puis forcer l'utilisation de g++-11
   export CXX=g++-11
   export CC=gcc-11
   ```

### Problème 3 : Sous-module COWL vide

**Erreur** :
```
fatal error: cowl.h: No such file or directory
```

**Solution** :
```bash
# Depuis la racine du projet
git submodule update --init --recursive

# Vérifier :
ls lib/cowl/include/
# Doit contenir des fichiers .h
```

### Problème 4 : Erreur de Linking avec uLib

**Erreur** :
```
undefined reference to `ulib_*`
```

**Solution** :
```bash
# Reconstruire COWL complètement
cd lib/cowl
rm -rf build
mkdir build && cd build
cmake ..
make
cd ../../..

# Reconstruire le projet
cd build
rm -rf *
cmake ..
make
```

### Problème 5 : Permission Denied

**Erreur** :
```
bash: ./build/ParserProject: Permission denied
```

**Solution** :
```bash
# Donner les permissions d'exécution
chmod +x build/ParserProject

# Puis réessayer
./build/ParserProject
```

### Problème 6 : Out of Memory pendant la Compilation

**Erreur** :
```
c++: fatal error: Killed signal terminated program
```

**Solution** :
```bash
# Compiler avec moins de threads parallèles
make -j2
# ou sans parallélisme
make
```

---

## Recompilation Après Modifications

### Modifier les Règles CHR++

```bash
# 1. Éditer owlFunctional.chrpp
nano owlFunctional.chrpp

# 2. Recompiler (régénère automatiquement owl.cpp)
make

# 3. Tester
./build/ParserProject
```

### Nettoyage Complet

```bash
# Nettoyer les fichiers de build
cd build
make clean

# Ou nettoyage total :
cd ..
rm -rf build
mkdir build && cd build
cmake ..
make
```

---

## Arborescence Finale

Après installation complète, votre arborescence devrait ressembler à :

```
<dossier-parent>/
    chrpp/                    # CHR++ (externe, configurable via CHRPP_ROOT)
        chrppc/
            chrppc            # Exécutable du compilateur
        runtime/              # Runtime CHR++

    owlChrpp/                 # Ce projet (owl2chr)
        owlFunctional.chrpp   # Règles CHR++ (source principale)
        parsercowl.h          # Parser COWL
        CMakeLists.txt
        lib/
            cowl/             # Sous-module Git COWL
                include/
                src/
        build/                # Répertoire de build (généré)
            owl.cpp           # Généré par chrppc
            ParserProject     # Exécutable final
        results/              # Ontologies de test OWL2Bench
```

---

## Installation Terminée !

Vous êtes maintenant prêt à utiliser owl2chr. Consultez le [README.md](README.md) pour les instructions d'utilisation.

### Commandes Utiles

```bash
# Exécuter le projet
./build/ParserProject [fichier.ofn]

# Voir tous les tests
./build/ParserProject 2>&1 | grep "TEST"

# Recompiler après modifications
make

# Nettoyer
make clean
```

### Prochaines Étapes

1.  Tester avec vos propres ontologies OWL 2
2.  Modifier les règles CHR++ selon vos besoins
3.  Ajouter de nouvelles requêtes
4.  Contribuer au projet !

---

**Besoin d'aide ?** Ouvrez une issue sur [GitHub](https://github.com/arigraphitech/owlChrpp/issues).
