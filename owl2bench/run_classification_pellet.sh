#!/bin/bash
# Script pour exécuter la classification avec Pellet sur OWL2RL-11

WORK_DIR="/home/etud/Téléchargements/stage/owl2bench/sparql_reference_results"
ONTOLOGY_FILE="/home/etud/Téléchargements/stage/owl2bench/OWL2RL-11.owl"
OUTPUT_FILE="/home/etud/Téléchargements/stage/stage_labo/ParserProject/classification_pellet_OWL2RL-11.txt"

cd "$WORK_DIR"

echo "=========================================="
echo "Classification OWL2RL-11 avec Pellet"
echo "=========================================="

# Construire le classpath
CP="."
if [ -d "apache-jena-3.10.0/lib" ]; then
    for jar in apache-jena-3.10.0/lib/*.jar; do
        CP="$CP:$jar"
    done
fi
CP="$CP:openllet-distribution-2.6.5.jar:openllet-query-2.6.5.jar"

# Compiler si nécessaire
if [ ! -f "ClassificationPellet.class" ] || [ "ClassificationPellet.java" -nt "ClassificationPellet.class" ]; then
    echo "Compilation de ClassificationPellet.java..."
    javac -cp "$CP" ClassificationPellet.java
    
    if [ $? -ne 0 ]; then
        echo "❌ Erreur de compilation"
        exit 1
    fi
    echo "✓ Compilation réussie"
fi

# Exécuter
echo ""
echo "Exécution de la classification..."
java -Xmx8g -cp "$CP" ClassificationPellet "$ONTOLOGY_FILE" "$OUTPUT_FILE"

if [ $? -eq 0 ]; then
    echo ""
    echo "=========================================="
    echo "✓ Classification terminée avec succès !"
    echo "Résultats dans: $OUTPUT_FILE"
    echo "=========================================="
    
    # Afficher quelques statistiques
    NUM_LINES=$(wc -l < "$OUTPUT_FILE")
    echo "Nombre de paires SubClassOf: $NUM_LINES"
    
    # Afficher les 10 premières lignes
    echo ""
    echo "Aperçu des résultats (10 premières lignes) :"
    head -10 "$OUTPUT_FILE"
else
    echo ""
    echo "❌ Erreur lors de l'exécution"
    exit 1
fi
