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

**Note importante** : Le **runtime CHR++** (headers) est **REQUIS** pour compiler le projet.

Deux composants CHR++ :
1. **Runtime CHR++** (headers: `chrpp.hh`, `logical_var.hpp`, etc.) → **OBLIGATOIRE**
   - Nécessaire pour compiler `owl.cpp` (même pré-généré)
   - Contient les définitions de types et classes CHR++

2. **Compilateur CHR++ (chrppc)** → **OPTIONNEL**
   - Nécessaire uniquement pour **régénérer** `owl.cpp` depuis `owlFunctional.chrpp`
   - Pas besoin si vous ne modifiez pas les règles CHR++

### Option 1 : Installation minimale (Runtime seulement)

Si vous voulez simplement compiler et exécuter (sans modifier les règles) :

```bash
# Cloner CHR++ pour obtenir les headers du runtime
cd ~/projets  # ou votre répertoire de travail
git clone https://github.com/chr-projects/chrpp.git
# ou télécharger depuis http://chr.pl/

# PAS besoin de compiler chrppc !
# Les headers dans chrpp/runtime/ suffisent

# Définir CHRPP_ROOT
export CHRPP_ROOT=~/projets/chrpp
echo 'export CHRPP_ROOT=~/projets/chrpp' >> ~/.bashrc
```

Avec juste le runtime, vous pouvez **compiler et exécuter** le projet.
Sans le runtime, **impossible de compiler** (erreur: `chrpp.hh: No such file`).

### Option 2 : Installation complète (Runtime + Compiler)

Si vous voulez **modifier** `owlFunctional.chrpp` et régénérer `owl.cpp` :

#### Étape 1 : Obtenir CHR++

**Option A - Dépôt public (si disponible)** :
```bash
# Cloner dans le dossier parent du projet
cd ~/projets/  # ou votre répertoire de travail
git clone https://github.com/chr-projects/chrpp.git
# ou télécharger depuis http://chr.pl/
```

**Option B - Archive locale** :
```bash
# Si vous avez une archive CHR++
cd ~/projets/
wget http://example.com/chrpp.tar.gz
tar xzf chrpp.tar.gz
```

**Option C - Demander l'accès** :
CHR++ peut nécessiter une demande d'accès auprès des mainteneurs.
Contactez : chr-support@example.org (ou consultez http://chr.pl/)

#### Étape 2 : Compiler CHR++

```bash
cd chrpp
cd chrppc
make

# Vérifier que le compilateur fonctionne
./chrppc --version
```

**Sortie attendue** :
```
CHR++ Compiler version X.Y.Z
```

#### Étape 3 : Configurer le Chemin

**Méthode A - Variable d'environnement (recommandé)** :
```bash
# Ajouter dans ~/.bashrc ou ~/.zshrc
export CHRPP_ROOT=$HOME/projets/chrpp

# Recharger la configuration
source ~/.bashrc
```

**Méthode B - Spécifier à chaque build** :
```bash
cmake -DCHRPP_ROOT=/chemin/absolu/vers/chrpp -S . -B build
```

#### Étape 4 : Vérifier l'Installation

```bash
cd owlChrpp
rm -rf build
cmake -DCHRPP_ROOT=$CHRPP_ROOT -S . -B build
```

**Sortie attendue** :
```
-- CHR++ trouvé: /chemin/vers/chrpp/chrppc/chrppc (régénération de owl.cpp possible)
```

### Option 3 : CHR++ Déjà Installé Système

Si CHR++ est installé système (rare) :

```bash
# Trouver où est installé CHR++
which chrppc
# Exemple : /usr/local/bin/chrppc

# Trouver la racine CHR++
find /usr -name chrppc 2>/dev/null
# Exemple : /usr/local/share/chrpp/chrppc/chrppc

# Définir CHRPP_ROOT vers le dossier parent de chrppc/
export CHRPP_ROOT=/usr/local/share/chrpp
```

### Dépannage CHR++

**Problème** : `chrppc: command not found` lors du build

**Solution 1** : Vérifier que CHRPP_ROOT est défini
```bash
echo $CHRPP_ROOT
# Doit afficher : /chemin/vers/chrpp
```

**Solution 2** : Vérifier que chrppc existe
```bash
ls -la $CHRPP_ROOT/chrppc/chrppc
# Doit afficher : -rwxr-xr-x ... chrppc
```

**Solution 3** : Utiliser le mode sans CHR++ (owl.cpp pré-généré)
```bash
cmake -S . -B build  # Sans -DCHRPP_ROOT
cmake --build build
```

---

## Installation du Projet

### 1. Cloner le Repository

```bash
# Cloner en récupérant les sous-modules (méthode recommandée)
git clone --recurse-submodules https://github.com/arigraphitech/owlChrpp.git owlChrpp
cd owlChrpp

# Si les sous-modules n'ont pas été initialisés correctement (par ex. .gitmodules manquant ou clone partiel) :
git submodule sync --recursive
git submodule update --init --recursive

# Cas rare : ajouter manuellement le sous-module COWL si nécessaire
# git submodule add https://github.com/sisinflab-swot/cowl.git lib/cowl
# git submodule update --init --recursive
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

Remarque importante : pour garantir que les fichiers de configuration et de build sont générés dans le dossier `build`, utilisez les options -S (source) et -B (build) de CMake :

```bash
# Depuis la racine du dépôt :
cmake -DCHRPP_ROOT=/chemin/vers/chrpp -S . -B build

# ou, si vous êtes déjà dans build, utilisez la syntaxe suivante pour forcer le répertoire source :
cmake -DCHRPP_ROOT=/chemin/vers/chrpp -S .. -B .

# En mode Release :
cmake -DCHRPP_ROOT=/chemin/vers/chrpp -DCMAKE_BUILD_TYPE=Release -S . -B build
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
### Problème 5 : Plantage à l'exécution - assertion dans `logical_var.hpp`

Symptôme : l'exécutable se termine avec une assertion du type :

```
ParserProject: /.../chrpp/runtime/logical_var.hpp:201: const chr::Logical_var_imp<T>& chr::Logical_var_imp<T>::ra() const [with T = int]: Assertion '_backtrack_depth < Back' failed.
Aborted (core dumped)
```

Causes possibles et solutions :

1. Incohérence de versions entre les fichiers générés par `chrppc` et la bibliothèque runtime :
    - Si `owl.cpp` a été généré avec une version différente de CHR++ que la bibliothèque `runtime` utilisée lors de la compilation, des incompatibilités (notamment au niveau de `Logical_var<T>`) peuvent provoquer des assertions.
    - Solution : régénérer `owl.cpp` avec le même compilateur `chrppc` que celui présent dans `CHRPP_ROOT` avant de recompiler le projet.

    Exemple :

    ```bash
    # Supprimer l'ancien owl.cpp généré
    rm -f build/owl.cpp

    # Regénérer depuis la racine du projet en utilisant chrppc du CHRPP_ROOT
    ${CHRPP_ROOT}/chrppc/chrppc owlFunctional.chrpp -t -sout > build/owl.cpp

    # Reconfigurer et reconstruire
    cmake -DCHRPP_ROOT=${CHRPP_ROOT} -S . -B build
    cmake --build build -- -j$(nproc)
    ```

2. Mismatch de paramètres de template (`Logical_var<int>` vs `Logical_var<bool>`)
    - Si vous avez modifié manuellement le code source (par ex. migration de `Logical_var<int>` vers `Logical_var<bool>`), assurez-vous que tous les fichiers sources et en-têtes (y compris le code généré `owl.cpp`) sont cohérents.
    - Solution : refaire la migration *et* régénérer `owl.cpp` puis recompiler.

3. Corruption d'état de backtracking pendant l'exécution
    - Peut venir d'un bug dans une règle CHR++ ou d'une utilisation incorrecte des variables logiques dans les règles.
    - Solution : exécuter en debug (build non optimisé) et activer les logs/résultats minima pour isoler la règle fautive.

4. Si rien ne fonctionne
    - Essayez de compiler et exécuter l'exemple minimal fourni par CHR++ pour vérifier que `chrppc` et la runtime fonctionnent correctement ensemble.
    - Comparez les versions (hash git) de CHR++ utilisées pour générer et compiler.


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
