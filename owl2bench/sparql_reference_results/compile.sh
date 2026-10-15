#!/bin/bash
cd /home/etud/Téléchargements/stage/owl2bench/sparql_reference_results

# Construire le classpath
CP="."
for jar in apache-jena-3.10.0/lib/*.jar; do
    CP="$CP:$jar"
done
CP="$CP:openllet-distribution-2.6.5.jar:openllet-query-2.6.5.jar"

echo "Compilation..."
javac -cp "$CP" OWL2RLQueryExecutor.java

if [ $? -eq 0 ]; then
    echo "✓ Compilation réussie"
else
    echo "✗ Erreur de compilation"
    exit 1
fi
