# 📦 Guide d'Installation - ParserProject

Ce guide détaille l'installation complète du projet ParserProject (OWL 2 Reasoner avec CHR++).

## 📋 Table des Matières

1. [Prérequis Système](#prérequis-système)
2. [Installation des Dépendances](#installation-des-dépendances)
3. [Installation de CHR++](#installation-de-chr)
4. [Installation du Projet](#installation-du-projet)
5. [Vérification de l'Installation](#vérification-de-linstallation)
6. [Dépannage](#dépannage)

---

## 🖥️ Prérequis Système

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

## 🔧 Installation des Dépendances

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

## 🧩 Installation de CHR++

CHR++ est le compilateur de règles de contraintes nécessaire pour le projet.

### Option 1 : Installation depuis les Sources (Recommandé)

```bash
# 1. Créer un répertoire pour CHR++
mkdir -p ~/Téléchargements/stage
cd ~/Téléchargements/stage

# 2. Cloner ou télécharger CHR++
# (Adaptez selon votre source de CHR++)
# Exemple si vous avez un repository CHR++ :
git clone <url_chrpp_repository> chrpp
cd chrpp

# 3. Compiler CHR++
cd chrppc
make

# 4. Vérifier que le compilateur fonctionne
./chrppc --version
# ou
./chrppc --help

# 5. Ajouter CHR++ au PATH (optionnel)
echo 'export PATH="$HOME/Téléchargements/stage/chrpp/chrppc:$PATH"' >> ~/.bashrc
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

## 📥 Installation du Projet

### 1. Cloner le Repository

```bash
# Cloner avec les sous-modules (COWL)
cd ~/Téléchargements/stage/stage_labo
git clone --recursive https://github.com/arigraphitech/owlChrpp.git ParserProject

# Si vous avez déjà cloné sans --recursive :
cd ParserProject
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

Éditez `CMakeLists.txt` pour pointer vers votre installation de CHR++ :

```bash
nano CMakeLists.txt
# ou
vi CMakeLists.txt
# ou utilisez votre éditeur préféré
```

Modifiez la ligne suivante (ligne ~20) :

```cmake
# Adaptez ce chemin selon votre installation
set(CHRPP_ROOT /home/etud/Téléchargements/stage/chrpp)
```

Remplacez par le chemin correct, par exemple :
- `/home/votre_utilisateur/chrpp`
- `/usr/local/chrpp`
- `~/Téléchargements/stage/chrpp`

### 4. Créer le Répertoire de Build

```bash
cd ~/Téléchargements/stage/stage_labo/ParserProject
mkdir -p build
cd build
```

### 5. Configurer avec CMake

```bash
# Configuration avec CMake
cmake ..

# En cas d'erreur, essayez avec des options spécifiques :
cmake .. -DCMAKE_BUILD_TYPE=Release
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
⏳ Génération de .../build/owl.cpp depuis .../owlFunctional.chrpp via chrppc
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

## ✅ Vérification de l'Installation

### Test 1 : Exécutable Créé

```bash
# Vérifier que l'exécutable existe
ls -lh build/ParserProject

# Doit afficher quelque chose comme :
# -rwxr-xr-x 1 user user 2.5M Dec 7 16:00 build/ParserProject
```

### Test 2 : Exécution avec Ontologie d'Exemple

```bash
# Exécuter avec l'ontologie par défaut
./build/ParserProject

# Ou spécifier un fichier :
./build/ParserProject example2.ofn
```

**Sortie attendue** :
```
same individuals : http://example.org#Alice , http://example.org#AliceAlias
same individuals : http://example.org#Bob , http://example.org#Robert
...
=== TEST 1: querySuperClassOfUri(PhDStudent) ===
Résultat attendu: Student, Learner, owl:Thing
http://example.org#PhDStudent
http://example.org#Student
http://example.org#Learner
owl:Thing
...
```

### Test 3 : Tests Complets

```bash
# Exécuter tous les tests
./build/ParserProject 2>&1 | grep "TEST"

# Vous devriez voir 8 tests s'exécuter
```

---

## 🐛 Dépannage

### Problème 1 : CMake ne trouve pas CHR++

**Erreur** :
```
CMake Error: Could not find chrppc compiler
```

**Solution** :
1. Vérifier que CHR++ est bien installé :
   ```bash
   ls ~/Téléchargements/stage/chrpp/chrppc/chrppc
   ```

2. Modifier `CMakeLists.txt` avec le bon chemin :
   ```cmake
   set(CHRPP_ROOT /chemin/vers/votre/chrpp)
   ```

3. Nettoyer et reconfigurer :
   ```bash
   cd build
   rm -rf *
   cmake ..
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
# Initialiser les sous-modules
cd ~/Téléchargements/stage/stage_labo/ParserProject
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

## 🔄 Recompilation Après Modifications

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

## 📊 Arborescence Finale

Après installation complète, votre arborescence devrait ressembler à :

```
~/Téléchargements/stage/
├── chrpp/                    # CHR++ compiler
│   ├── chrppc/
│   │   └── chrppc           # Exécutable du compilateur
│   └── runtime/             # Runtime CHR++
│
└── stage_labo/
    └── ParserProject/       # Votre projet
        ├── owlFunctional.chrpp
        ├── parsercowl.h
        ├── CMakeLists.txt
        ├── example2.ofn
        ├── lib/
        │   └── cowl/        # Sous-module Git
        │       ├── include/
        │       ├── src/
        │       └── build/
        └── build/           # Répertoire de build
            ├── owl.cpp      # Généré par chrppc
            └── ParserProject # Exécutable final
```

---

## 🎉 Installation Terminée !

Vous êtes maintenant prêt à utiliser ParserProject. Consultez le [README.md](README.md) pour les instructions d'utilisation.

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

1. ✅ Tester avec vos propres ontologies OWL 2
2. ✅ Modifier les règles CHR++ selon vos besoins
3. ✅ Ajouter de nouvelles requêtes
4. ✅ Contribuer au projet !

---

**Besoin d'aide ?** Ouvrez une issue sur [GitHub](https://github.com/arigraphitech/owlChrpp/issues).
