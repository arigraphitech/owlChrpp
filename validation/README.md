# Valider les résultats avec OWL2Bench et Pellet

Ce guide explique comment produire les références de réalisation, de
classification et de requêtes SPARQL avec les outils fournis dans `owl2bench/`,
puis les comparer aux résultats du raisonneur CHR++.

Les scripts sont regroupés dans ce dossier :

| Script | Comparaison |
|---|---|
| `compare_instances.py` | Réalisation : classes de chaque individu. |
| `compare_classification.py` | Classification : paires sous-classe/super-classe. |
| `compare_query_results.py` | Résultats des 18 requêtes SPARQL. |
| `compare_text_files.py` | Comparaison générique de texte, ignorant les commentaires `//` et les préfixes d'IRI avant `#`. À réserver aux inspections de texte ; utiliser les trois scripts précédents pour la validation Pellet. |

L'exemple utilise `OWL2RL-10.ofn`. Pour un premier essai rapide, remplacer
`OWL2RL-10` par `OWL2RL-11`. Toutes les commandes sont à exécuter dans le même
terminal Bash, en commençant à la racine du dépôt. Si une commande de compilation
ou de génération échoue, corriger cette erreur avant de lancer les comparaisons.

## 1. Préparer les chemins

Prérequis : JDK 17 ou plus récent (`java` et `javac`), Python 3.10 ou plus récent,
CMake, compilateur C++ et CHR++. Les JAR Pellet, le convertisseur, Jena et
Openllet utilisés ci-dessous sont ceux du dossier `owl2bench/`.

```bash
PROJECT_DIR="$(pwd -P)"
DATASET="OWL2RL-10"
ONTOLOGY="$PROJECT_DIR/results/$DATASET.ofn"
BENCH_DIR="$PROJECT_DIR/owl2bench"
RUN_DIR="$PROJECT_DIR/build/validation/$DATASET"

PELLET_JAR="$BENCH_DIR/Experiments/java runnable jar files/pellet.jar"
CONVERTER_JAR="$BENCH_DIR/Experiments/java runnable jar files/convert.jar"
SPARQL_DIR="$BENCH_DIR/sparql_reference_results"
REFERENCE_DIR="$RUN_DIR/pellet/sparql/$DATASET"

mkdir -p "$RUN_DIR/input" "$RUN_DIR/pellet" "$REFERENCE_DIR" \
         "$RUN_DIR/java" "$RUN_DIR/tool" "$RUN_DIR/reports"
```

Pour une autre ontologie OWL2Bench, changer `DATASET` et, si nécessaire,
`ONTOLOGY`. Le fichier d'entrée du raisonneur doit être en syntaxe fonctionnelle
OWL (`.ofn`). Tous les résultats de cet essai sont regroupés sous `RUN_DIR`.

## 2. Compiler et exécuter le raisonneur

Le CMake actuel compile `owlFunctional.chrpp`. Vérifier la variante choisie avant
la compilation. Adapter `CHRPP_ROOT` si CHR++ n'est pas dans le dossier frère
`../chrpp`. Fournir un chemin absolu, car la génération du C++ se lance depuis
le répertoire de compilation.

```bash
ulimit -s unlimited &&
cmake -S "$PROJECT_DIR" -B "$PROJECT_DIR/build" -DCHRPP_ROOT="$PROJECT_DIR/../chrpp" &&
cmake --build "$PROJECT_DIR/build" --target ParserProject -j2 &&
(
    cd "$RUN_DIR/tool" &&
    "$PROJECT_DIR/build/ParserProject" "$ONTOLOGY" > execution.log 2>&1
)
```

**Pour les grosses ontologies, exécuter `ulimit -s unlimited` dans le terminal
qui lance le programme**, notamment avec la transitivité immédiate.

L'enchaînement avec `&&` empêche d'exécuter un ancien binaire si la compilation
échoue. L'exécution doit se terminer normalement et produire :

| Fichier | Contenu |
|---|---|
| `tool/res_realisation` | Associations individu/classe. |
| `tool/res_classification` | Paires de classes en relation de sous-classe stricte. |
| `tool/res_queries` | Résultats des requêtes, préfixés par leur identifiant. |
| `tool/execution.log` | Chrono et éventuels messages d'erreur. |

Le programme ouvre ses résultats dans le répertoire courant et les remplace
à chaque exécution. Le sous-répertoire `tool/` évite d'écraser les autres essais.

## 3. Générer la réalisation et la classification Pellet

Utiliser **le même fichier `.ofn`** que pour le raisonneur. Le JAR Pellet accepte
ce format directement. Conserver les sorties brutes, puis extraire les lignes
attendues par les comparateurs :

```bash
java -Xmx8g -jar "$PELLET_JAR" "$ONTOLOGY" realisation \
    > "$RUN_DIR/pellet/realisation.raw" \
    2> "$RUN_DIR/pellet/realisation.stderr"

java -Xmx8g -jar "$PELLET_JAR" "$ONTOLOGY" classification \
    > "$RUN_DIR/pellet/classification.raw" \
    2> "$RUN_DIR/pellet/classification.stderr"

grep ' -> ' "$RUN_DIR/pellet/realisation.raw" \
    > "$RUN_DIR/pellet/realisation.txt"
grep ' SubClassOf ' "$RUN_DIR/pellet/classification.raw" \
    > "$RUN_DIR/pellet/classification.txt"
```

La réalisation Pellet contient des lignes de la forme
`<individu> -> Nodeset[Node(...)]`. La classification contient des lignes
`<sous-classe> SubClassOf <super-classe>`. Les scripts du dépôt acceptent ces
formats. `-Xmx8g` fixe la limite du tas Java ; l'adapter à la mémoire disponible.

## 4. Préparer l'entrée RDF/XML pour SPARQL

L'exécuteur Jena charge une ontologie RDF/XML (`.owl`). Pour garantir que les
deux outils traitent la même entrée, convertir **une copie du `.ofn` choisi**,
plutôt que sélectionner un autre fichier portant un nom similaire.

```bash
cp "$ONTOLOGY" "$RUN_DIR/input/$DATASET.owl"
java --add-opens=java.base/java.lang=ALL-UNNAMED \
    -jar "$CONVERTER_JAR" rdf "$RUN_DIR/input/$DATASET.owl" \
    > "$RUN_DIR/input/conversion.log" 2>&1
```

Le convertisseur fourni modifie son fichier d'entrée sur place : ici, seule la
copie est modifiée. L'option `--add-opens` permet à cette version du convertisseur
d'utiliser son ancienne dépendance Guice avec les JDK récents.

## 5. Générer les références SPARQL Pellet/Openllet + Jena

L'exécuteur fourni s'appuie sur Openllet, dérivé de Pellet, et sur Jena. Il lit
`owl2rl_queries.txt` dans son répertoire courant. Créer une copie de ce fichier
avec le préfixe de l'ontologie choisie :

```bash
python3 - "$ONTOLOGY" "$SPARQL_DIR/owl2rl_queries.txt" \
    "$RUN_DIR/java/owl2rl_queries.txt" <<'PY'
from pathlib import Path
import re
import sys

ontology, template, destination = map(Path, sys.argv[1:])
match = re.search(r'Prefix\(\s*:\s*=\s*<([^>]+)>\s*\)',
                  ontology.read_text(encoding="utf-8"))
if not match:
    raise SystemExit("Préfixe par défaut introuvable dans le fichier .ofn")
queries = template.read_text(encoding="utf-8")
queries = queries.replace("https://kracr.iiitd.edu.in/OWL2Bench#", match.group(1))
destination.write_text(queries, encoding="utf-8")
print("Préfixe SPARQL :", match.group(1))
PY

SPARQL_CP="$RUN_DIR/java:$SPARQL_DIR/apache-jena-3.10.0/lib/*:$SPARQL_DIR/openllet-distribution-2.6.5.jar:$SPARQL_DIR/openllet-query-2.6.5.jar"

javac -cp "$SPARQL_CP" -d "$RUN_DIR/java" \
    "$SPARQL_DIR/OWL2RLQueryExecutor.java"

(
    cd "$RUN_DIR/java"
    java -Xmx8g -cp "$SPARQL_CP" OWL2RLQueryExecutor \
        "$RUN_DIR/input/$DATASET.owl" "$REFERENCE_DIR" \
        > "$RUN_DIR/pellet/sparql-execution.log" 2>&1
)
```

Les préfixes `http://benchmark/OWL2Bench#` et
`https://kracr.iiitd.edu.in/OWL2Bench#` sont différents : utiliser le mauvais
préfixe peut donner des réponses vides. Les requêtes fournies ciblent le
vocabulaire OWL2Bench ; pour un autre vocabulaire, adapter aussi les requêtes du
raisonneur et leur correspondance dans `compare_query_results.py`.

Le dossier de référence doit porter le nom `DATASET` et contenir des fichiers
`DATASET_queryNN.txt`. Le comparateur déduit les noms attendus du nom de ce
dossier. Vérifier la présence des 18 fichiers avant de comparer :

```bash
python3 - "$REFERENCE_DIR" "$DATASET" <<'PY'
from pathlib import Path
import sys

directory, dataset = Path(sys.argv[1]), sys.argv[2]
numbers = (2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 19, 20, 21, 22)
missing = [f"{dataset}_query{n:02d}.txt" for n in numbers
           if not (directory / f"{dataset}_query{n:02d}.txt").is_file()]
if missing:
    raise SystemExit("Références manquantes : " + ", ".join(missing))
log = (directory.parent.parent / "sparql-execution.log").read_text(encoding="utf-8")
if "✗" in log or "ERREUR:" in log:
    raise SystemExit("Consulter sparql-execution.log : une requête a échoué")
print("18 fichiers de référence présents ; aucune erreur de requête signalée.")
PY
```

Un fichier vide peut être une réponse valide à une requête ; un fichier absent
ne doit pas être assimilé à une réponse vide.

## 6. Comparer les trois catégories de résultats

Le premier argument est toujours la sortie du raisonneur CHR++, le second la
référence Pellet. Les rapports sont enregistrés séparément :

```bash
python3 "$PROJECT_DIR/validation/compare_instances.py" \
    "$RUN_DIR/tool/res_realisation" "$RUN_DIR/pellet/realisation.txt" \
    > "$RUN_DIR/reports/realisation.txt" \
    2> "$RUN_DIR/reports/realisation.stderr"

python3 "$PROJECT_DIR/validation/compare_classification.py" \
    "$RUN_DIR/tool/res_classification" "$RUN_DIR/pellet/classification.txt" \
    > "$RUN_DIR/reports/classification.txt"

python3 "$PROJECT_DIR/validation/compare_query_results.py" \
    "$RUN_DIR/tool/res_queries" "$REFERENCE_DIR" \
    > "$RUN_DIR/reports/sparql.txt"
```

Pour conclure à l'égalité des résultats comparés, vérifier :

- **Réalisation** : aucun individu manquant ou inconnu, aucune classe manquante
  ou en trop par individu.
- **Classification** : aucune paire manquante ou en trop.
- **SPARQL** : 18 requêtes identiques, aucun résultat manquant ou en trop.

`compare_classification.py` et `compare_query_results.py` retournent `0` en cas
d'égalité et `1` en cas d'écart. **`compare_instances.py` peut retourner `0` même
s'il trouve des différences : lire son résumé.** Ne pas interrompre la lecture
des autres rapports après le premier écart.

Les comparateurs travaillent sur les résultats, pas sur leur ordre d'écriture.
Ils ne remplacent pas une IRI par une autre ayant seulement le même nom local.

Ces vérifications couvrent les réalisations, classifications et requêtes
comparées sur l'ontologie choisie ; une égalité sur ces fichiers ne démontre
pas à elle seule la prise en charge de tous les axiomes OWL 2 RL.
