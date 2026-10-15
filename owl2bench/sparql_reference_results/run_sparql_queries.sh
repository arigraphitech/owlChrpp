#!/bin/bash
# Script principal pour exécuter les requêtes SPARQL OWL2RL avec Pellet

WORK_DIR="/home/etud/Téléchargements/stage/owl2bench/sparql_reference_results"
ONTOLOGY_DIR="/home/etud/Téléchargements/stage/owl2bench"
OUTPUT_DIR="$WORK_DIR/pellet_results"

cd "$WORK_DIR"

echo "=========================================="
echo "OWL2RL SPARQL Query Executor"
echo "=========================================="

# Étape 1: Installation de Jena et Pellet
JENA_VERSION="5.6.0"
JENA_DIR="apache-jena-${JENA_VERSION}"

if [ ! -d "$JENA_DIR" ] || [ ! -d "pellet-2.3.1" ]; then
    echo "Installation de Jena et Pellet..."
    bash setup_jena.sh
fi

# Configurer le classpath
JENA_CP="$WORK_DIR/$JENA_DIR/lib/*"
PELLET_CP="$WORK_DIR/pellet-2.3.1/lib/*"
CLASSPATH=".:$JENA_CP:$PELLET_CP"

echo ""
echo "Étape 1: Compilation du programme Java..."
if [ ! -f "OWL2RLQueryExecutor.class" ]; then
    bash compile.sh
fi

# Construire le classpath pour l'exécution
CP="."
for jar in apache-jena-3.10.0/lib/*.jar; do
    CP="$CP:$jar"
done
CP="$CP:openllet-distribution-2.6.5.jar:openllet-query-2.6.5.jar"

# Créer le répertoire de sortie
mkdir -p "$OUTPUT_DIR"

echo ""
echo "Étape 2: Exécution des requêtes..."
echo "=========================================="

# Exécuter pour OWL2RL-11
for univ in 11; do  # ← MODIFIÉ ICI pour traiter uniquement OWL2RL-11
    ONTOLOGY_FILE="$ONTOLOGY_DIR/OWL2RL-${univ}.owl"

    if [ ! -f "$ONTOLOGY_FILE" ]; then
        echo "⚠ Fichier non trouvé: $ONTOLOGY_FILE"
        continue
    fi

    echo ""
    echo "--- OWL2RL-${univ} ---"

    OUTPUT_SUBDIR="$OUTPUT_DIR/OWL2RL-${univ}"
    mkdir -p "$OUTPUT_SUBDIR"

    java -Xmx8g -cp "$CP" OWL2RLQueryExecutor \
        "$ONTOLOGY_FILE" \
        "$OUTPUT_SUBDIR"

    if [ $? -eq 0 ]; then
        echo "✓ OWL2RL-${univ} terminé"
    else
        echo "✗ Erreur avec OWL2RL-${univ}"
    fi
done

echo ""
echo "=========================================="
echo "Résumé des résultats"
echo "=========================================="

for univ in 11; do  # ← MODIFIÉ ICI
    OUTPUT_SUBDIR="$OUTPUT_DIR/OWL2RL-${univ}"
    if [ -d "$OUTPUT_SUBDIR" ]; then
        NUM_FILES=$(ls -1 "$OUTPUT_SUBDIR"/*.txt 2>/dev/null | wc -l)
        echo "OWL2RL-${univ}: $NUM_FILES fichiers générés"

        # Afficher le nombre de résultats pour chaque requête
        for file in "$OUTPUT_SUBDIR"/*.txt; do
            if [ -f "$file" ]; then
                COUNT=$(wc -l < "$file")
                BASENAME=$(basename "$file")
                echo "  - $BASENAME: $COUNT résultats"
            fi
        done
    fi
done

echo ""
echo "=========================================="
echo "Terminé ! Résultats dans: $OUTPUT_DIR"
echo "=========================================="