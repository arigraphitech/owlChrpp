# Correctifs d'Installation - Mars 2026

## Modifications Appliquées

### 1. Fichier `.gitmodules` Ajouté ✅

**Problème** : Le sous-module COWL n'était pas téléchargé lors du clone avec `--recursive`

**Solution** : Ajout du fichier `.gitmodules` manquant :
```
[submodule "lib/cowl"]
	path = lib/cowl
	url = https://github.com/sisinflab-swot/cowl.git
```

### 2. Instructions de Clonage Corrigées ✅

**Dans README.md et INSTALL.md** :

**Avant** :
```bash
git clone --recursive https://github.com/arigraphitech/owlChrpp.git
cd owlChrpp
git submodule update --init --recursive
```

**Après** :
```bash
git clone --recurse-submodules https://github.com/arigraphitech/owlChrpp.git
cd owlChrpp

# Si les sous-modules n'ont pas été récupérés :
git submodule sync --recursive
git submodule update --init --recursive
```

### 3. Commande CMake Corrigée ✅

**Problème** : Les fichiers de build n'étaient pas placés dans `/build`

**Avant** :
```bash
mkdir -p build && cd build
cmake ..
make
```

**Après** :
```bash
# Depuis la racine du projet (recommandé) :
cmake -DCHRPP_ROOT=/path/to/chrpp -S . -B build
cmake --build build -- -j$(nproc)

# Ou depuis build/ :
cmake -DCHRPP_ROOT=/path/to/chrpp -S .. -B .
```

### 4. Section Dépannage Ajoutée ✅

**Dans INSTALL.md**, nouvelle section "Problème 5" :

Explique l'erreur d'assertion dans `logical_var.hpp:201` :
```
Assertion '_backtrack_depth < Back' failed.
Aborted (core dumped)
```

**Causes identifiées** :
- Incompatibilité entre versions de `chrppc` (génération) et runtime CHR++
- Mismatch de paramètres template (`Logical_var<int>` vs `Logical_var<bool>`)
- Problème de compatibilité avec GCC 12

**Solutions fournies** :
- Régénération de `owl.cpp` avec le même `chrppc`
- Vérification de cohérence des types
- Debug en mode non optimisé

### 5. `.gitignore` Amélioré ✅

Ajout de :
```
build/
build_test/
owl.cpp.backup
*.log
res_*
sortie.txt
```

## Tests Effectués

✅ Compilation réussie avec `cmake -S . -B build`
✅ Exécution réussie avec `./build/ParserProject results/OWL2RL-11.ofn`
✅ Temps d'exécution : 0.27 secondes (sans erreur)

## État du Dépôt

```
Sur la branche firstVersion
Votre branche est en avance sur 'origin/firstVersion' de 4 commits.

Commit actuel : 483f81c
Message : docs: fix installation instructions and add .gitmodules
```

## Pour Pousser les Modifications

```bash
git push origin firstVersion
```

## Notes Importantes

### owl.cpp
Le fichier `owl.cpp` actuel (pré-migration `Logical_var<bool>`) compile et fonctionne correctement.
La régénération avec le nouveau `chrppc` peut causer des problèmes de compatibilité avec GCC 12.

**Recommandation** : Conserver `owl.cpp` tel quel tant que tout fonctionne.

### Sous-module lib/cowl
Le sous-module peut avoir des fichiers générés lors du build (dans `build/`).
Ces fichiers sont ignorés et ne doivent pas être commités.
