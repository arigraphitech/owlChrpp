#!/bin/bash
# Script de build pour ParserProject

cd "/home/etud/Téléchargements/stage/stage_labo/ParserProject"

# Nettoyage
rm -rf build
rm -f CMakeCache.txt
rm -rf CMakeFiles

# Creation du répertoire de build
mkdir build
cd build

# Configuration et compilation
cmake ..
make -j$(nproc)

echo "Build terminé. L'exécutable est dans: $(pwd)/ParserProject"
