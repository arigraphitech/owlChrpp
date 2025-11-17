#!/bin/bash
# Script pour analyser les contraintes owlDisjointClass

echo "=== Analyse des contraintes owlDisjointClass ==="
echo ""

# Exécuter le programme
./build/ParserProject 2>&1 > /tmp/owl_output.txt

# Fonction pour trouver le nom d'une adresse
get_name() {
    local addr=$1
    grep "logicalName.*$addr" /tmp/owl_output.txt | sed -E 's/.*logicalName#[0-9]+\(([^,]+),.*/\1/' | head -1
}

echo "📋 Déclarations de disjonction dans le fichier OWL:"
echo ""
grep "disjoin entre" /tmp/owl_output.txt | sed 's/^/  /'
echo ""

echo "🔗 Contraintes owlDisjointClass créées (paires binaires):"
echo ""

# Compter les contraintes
total=$(grep -c "owlDisjointClass" /tmp/owl_output.txt)
echo "  Total: $total contraintes"
echo ""

# Extraire et afficher chaque contrainte avec les noms
grep "owlDisjointClass" /tmp/owl_output.txt | while read line; do
    # Extraire les deux adresses
    addr1=$(echo "$line" | sed -E 's/.*\{ (\?0x[0-9a-f]+), (\?0x[0-9a-f]+) \}.*/\1/')
    addr2=$(echo "$line" | sed -E 's/.*\{ (\?0x[0-9a-f]+), (\?0x[0-9a-f]+) \}.*/\2/')
    
    # Trouver les noms correspondants
    name1=$(get_name "$addr1")
    name2=$(get_name "$addr2")
    
    # Afficher
    id=$(echo "$line" | sed -E 's/.*owlDisjointClass#([0-9]+).*/\1/')
    echo "  #$id: $name1 ⊥ $name2"
done

echo ""
echo "✅ Explication:"
echo "  - Première déclaration (Professor, Student) → 1 paire"
echo "  - Deuxième déclaration (Course, Professor, Student) → 3 paires:"
echo "    * Course ⊥ Professor"
echo "    * Course ⊥ Student"
echo "    * Professor ⊥ Student (déjà déclaré)"
echo ""
echo "  Total attendu: 4 contraintes (1 + 3)"
echo "  Total obtenu: $total contraintes"
