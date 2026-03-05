# FAQ - CHR++ et owlChrpp

## Questions Fréquentes sur l'Installation

### ❓ Ai-je besoin de CHR++ pour utiliser owlChrpp ?

**Non !** CHR++ est **optionnel**.

- ✅ **Sans CHR++** : Vous pouvez compiler et exécuter le raisonneur
  - Le fichier `owl.cpp` (code généré) est **inclus** dans le dépôt
  - Parfait pour : utiliser le raisonneur, tester des ontologies, benchmarks

- 🔧 **Avec CHR++** : Nécessaire uniquement pour **développement**
  - Si vous voulez modifier les règles dans `owlFunctional.chrpp`
  - Régénère automatiquement `owl.cpp` à partir des règles CHR++

### ❓ Que signifie "chrppc non trouvé - utilisation de owl.cpp pré-généré" ?

C'est un message **normal** et **informatif**, pas une erreur !

```
-- chrppc non trouvé - utilisation de owl.cpp pré-généré (lecture seule)
-- Pour modifier owlFunctional.chrpp, installer CHR++ et relancer cmake -DCHRPP_ROOT=...
```

**Signification** :
- CMake n'a pas trouvé le compilateur CHR++ (`chrppc`)
- Il utilisera le fichier `owl.cpp` déjà présent dans le dépôt
- Le projet compilera et fonctionnera parfaitement

**Action requise** : Aucune ! Continuez la compilation.

### ❓ Comment savoir si j'ai besoin de CHR++ ?

Vous avez besoin de CHR++ **uniquement si** :

✅ Vous voulez **ajouter de nouvelles règles** OWL 2
✅ Vous voulez **modifier** des règles existantes dans `owlFunctional.chrpp`
✅ Vous développez de **nouvelles fonctionnalités** de raisonnement

Vous **n'avez PAS** besoin de CHR++ si :

❌ Vous voulez juste **compiler** le projet
❌ Vous voulez **exécuter** le raisonneur sur des ontologies
❌ Vous faites des **benchmarks** ou des **tests**
❌ Vous modifiez seulement `parsercowl.h` ou d'autres fichiers `.cpp/.h`

### ❓ Où obtenir CHR++ ?

CHR++ n'est pas toujours publiquement disponible. Voici les options :

#### Option 1 : Dépôt GitHub (si disponible)
```bash
git clone https://github.com/chr-projects/chrpp.git
# ou chercher "CHR++ compiler" sur GitHub
```

#### Option 2 : Site officiel
- Visitez : http://chr.pl/
- Cherchez la section "Downloads" ou "Getting Started"

#### Option 3 : Archive académique
Si vous êtes dans un contexte académique, CHR++ peut être disponible via :
- Votre institution
- Contact direct avec les mainteneurs : Vincent Barichard (voir INSTALL.md)

#### Option 4 : Utiliser la version locale (si vous avez accès)
Si quelqu'un dans votre équipe a déjà CHR++, vous pouvez :
```bash
# Copier depuis une installation existante
cp -r /chemin/vers/chrpp ~/projets/chrpp
cd ~/projets/chrpp/chrppc
make
```

### ❓ J'ai installé CHR++, comment le configurer ?

**Méthode 1 : Variable d'environnement (recommandé)**

Ajoutez dans `~/.bashrc` ou `~/.zshrc` :
```bash
export CHRPP_ROOT=/chemin/absolu/vers/chrpp
```

Puis rechargez :
```bash
source ~/.bashrc
```

Vérifiez :
```bash
echo $CHRPP_ROOT
# Doit afficher : /chemin/absolu/vers/chrpp
```

**Méthode 2 : Spécifier à chaque build**
```bash
cmake -DCHRPP_ROOT=/chemin/vers/chrpp -S . -B build
```

### ❓ Comment vérifier que CHR++ est bien détecté ?

Après `cmake`, vous devriez voir :

✅ **Avec CHR++** :
```
-- CHR++ trouvé: /home/user/chrpp/chrppc/chrppc (régénération de owl.cpp possible)
```

❌ **Sans CHR++** :
```
-- chrppc non trouvé - utilisation de owl.cpp pré-généré (lecture seule)
```

### ❓ Puis-je mélanger : modifier .chrpp sans CHR++ ?

**Non**, impossible directement. Voici ce qui se passe :

1. Si vous modifiez `owlFunctional.chrpp` **sans** CHR++
2. CMake **ne peut pas** régénérer `owl.cpp`
3. Vos modifications dans `.chrpp` seront **ignorées**
4. Le programme utilisera l'ancien `owl.cpp` pré-généré

**Solution** : Installez CHR++ pour régénérer `owl.cpp` après modifications.

### ❓ Puis-je modifier owl.cpp directement ?

**Techniquement oui, mais fortement déconseillé** :

❌ `owl.cpp` contient ~30 000 lignes de code généré
❌ Très difficile à lire et modifier manuellement
❌ Sera écrasé si vous recompilez avec CHR++

✅ **Meilleure approche** :
1. Installer CHR++
2. Modifier `owlFunctional.chrpp` (format lisible, ~1000 lignes)
3. Laisser CHR++ régénérer `owl.cpp` automatiquement

### ❓ Différence entre owl.chrpp et owlFunctional.chrpp ?

- `owl.chrpp` : **Ancien fichier obsolète** (12 KB)
  - Utilise `std::string` directement
  - **Ne pas utiliser**

- `owlFunctional.chrpp` : **Fichier actuel** (53 KB)
  - Utilise `chr::Logical_var<bool>`
  - 133 règles CHR++ actives
  - **Fichier à modifier si vous développez**

### ❓ Erreurs de compilation liées à CHR++

#### Problème 1 : `chrppc: command not found`

**Cause** : CHRPP_ROOT mal défini ou chrppc non compilé

**Solution** :
```bash
# Vérifier CHRPP_ROOT
echo $CHRPP_ROOT

# Vérifier que chrppc existe
ls -la $CHRPP_ROOT/chrppc/chrppc

# Si chrppc n'existe pas, le compiler
cd $CHRPP_ROOT/chrppc
make
```

#### Problème 2 : `error: invalid application of 'sizeof' to incomplete type 'std::array'`

**Cause** : Problème de compatibilité avec GCC 12+ lors de la régénération

**Solution** : Utiliser `owl.cpp` pré-généré (ne pas installer CHR++)
```bash
cmake -S . -B build  # Sans -DCHRPP_ROOT
```

#### Problème 3 : `Assertion '_backtrack_depth < Back' failed`

**Cause** : Incompatibilité entre version de `owl.cpp` et runtime CHR++

**Solution** : Voir INSTALL.md section "Problème 5" pour diagnostic complet

### ❓ Structure recommandée des dossiers

Si vous installez CHR++ :

```
~/projets/
├── owlChrpp/          # Ce projet
│   ├── owlFunctional.chrpp
│   ├── owl.cpp        # Généré par chrppc
│   ├── build/
│   └── ...
└── chrpp/             # CHR++ à côté
    ├── chrppc/
    │   └── chrppc     # Compilateur
    └── runtime/       # Headers CHR++
```

Puis définir :
```bash
export CHRPP_ROOT=/home/user/projets/chrpp
```

### ❓ Puis-je contribuer sans CHR++ ?

**Oui !** Vous pouvez contribuer au projet dans plusieurs domaines :

✅ **Parser COWL** (`parsercowl.h`)
✅ **Types de données** (`AnySimpleType.h`, `stringType.h`)
✅ **Documentation** (README, INSTALL, etc.)
✅ **Scripts de tests** (`compare_*.py`)
✅ **CMake** (`CMakeLists.txt`)
✅ **Benchmarks** et tests d'ontologies

❌ Seulement **modifications de règles CHR++** nécessitent CHR++

## Ressources

- **Documentation CHR++** : http://chr.pl/
- **INSTALL.md** : Instructions complètes d'installation
- **README.md** : Vue d'ensemble du projet
- **CONTRIBUTING.md** : Guide de contribution
