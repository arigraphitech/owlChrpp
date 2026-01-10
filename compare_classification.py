#!/usr/bin/env python3
"""
Comparateur de résultats de classification (CT)
Compare les résultats du raisonneur CHR++ avec les résultats de référence Pellet
"""

import sys
import re
from pathlib import Path
from typing import Set, Tuple

class ClassificationComparator:
    def __init__(self, chrpp_file: str, pellet_file: str):
        self.chrpp_file = Path(chrpp_file)
        self.pellet_file = Path(pellet_file)

    def parse_chrpp_results(self) -> Set[Tuple[str, str]]:
        """Parse les résultats du fichier CHR++ (format: SubClass SuperClass)"""
        results = set()

        with open(self.chrpp_file, 'r', encoding='utf-8') as f:
            for line in f:
                line = line.strip()
                if not line:
                    continue

                # Format: URI1 URI2 (séparés par espace)
                parts = line.split()
                if len(parts) >= 2:
                    sub_class = parts[0].strip('<>')
                    super_class = parts[1].strip('<>')

                    # Normaliser owl:Thing
                    if super_class == "owl:Thing" or super_class == "http://www.w3.org/2002/07/owl#Thing":
                        super_class = "owl:Thing"

                    results.add((sub_class, super_class))

        return results

    def parse_pellet_results(self) -> Set[Tuple[str, str]]:
        """Parse les résultats du fichier Pellet (format: <SubClass> SubClassOf <SuperClass>)"""
        results = set()

        with open(self.pellet_file, 'r', encoding='utf-8') as f:
            for line in f:
                line = line.strip()
                if not line or "Started Classification" in line or "Pellet :" in line:
                    continue

                # Format: <URI1> SubClassOf <URI2> ou <URI1> SubClassOf owl:Thing
                match = re.match(r'<([^>]+)>\s+SubClassOf\s+(?:<([^>]+)>|(owl:Thing))', line)
                if match:
                    sub_class = match.group(1)
                    super_class = match.group(2) if match.group(2) else match.group(3)

                    # Normaliser owl:Thing
                    if super_class == "http://www.w3.org/2002/07/owl#Thing":
                        super_class = "owl:Thing"

                    results.add((sub_class, super_class))

        return results

    def extract_local_name(self, uri: str) -> str:
        """Extrait le nom local d'une URI"""
        if '#' in uri:
            return uri.split('#')[-1]
        elif '/' in uri:
            return uri.split('/')[-1]
        return uri

    def compare_results(self) -> int:
        """Compare les résultats et affiche un rapport détaillé"""
        print("=" * 80)
        print("COMPARAISON DES RÉSULTATS DE CLASSIFICATION (CT)")
        print("=" * 80)
        print(f"Fichier CHR++:  {self.chrpp_file}")
        print(f"Fichier Pellet: {self.pellet_file}")
        print("=" * 80)
        print()

        # Parser les résultats
        chrpp_results = self.parse_chrpp_results()
        pellet_results = self.parse_pellet_results()

        # Calculer les différences
        missing = pellet_results - chrpp_results  # Dans Pellet mais pas dans CHR++
        extra = chrpp_results - pellet_results    # Dans CHR++ mais pas dans Pellet
        common = chrpp_results & pellet_results   # Communs aux deux

        # Afficher les statistiques
        print(f"Résultats CHR++:  {len(chrpp_results):4d} paires SubClassOf")
        print(f"Résultats Pellet: {len(pellet_results):4d} paires SubClassOf")
        print(f"Communs:          {len(common):4d} paires SubClassOf")
        print()

        if missing:
            print(f"MANQUANTS (dans Pellet mais pas dans CHR++): {len(missing)}")
            print("-" * 60)
            for sub, sup in sorted(missing, key=lambda x: (self.extract_local_name(x[0]), self.extract_local_name(x[1]))):
                sub_name = self.extract_local_name(sub)
                sup_name = self.extract_local_name(sup) if sup != "owl:Thing" else "owl:Thing"
                print(f"  - {sub_name} SubClassOf {sup_name}")
            print()

        if extra:
            print(f"EN TROP (dans CHR++ mais pas dans Pellet): {len(extra)}")
            print("-" * 60)
            for sub, sup in sorted(extra, key=lambda x: (self.extract_local_name(x[0]), self.extract_local_name(x[1]))):
                sub_name = self.extract_local_name(sub)
                sup_name = self.extract_local_name(sup) if sup != "owl:Thing" else "owl:Thing"
                print(f"  + {sub_name} SubClassOf {sup_name}")
            print()

        # Rapport final
        print("=" * 80)
        print("RAPPORT FINAL")
        print("=" * 80)

        if not missing and not extra:
            print("IDENTIQUE - Les résultats sont identiques")
            status = 0
        else:
            print("DIFFÉRENT - Les résultats diffèrent")
            status = 1

        print()
        print(f"Total correct:  {len(common)}")
        print(f"Total manquant: {len(missing)}")
        print(f"Total en trop:  {len(extra)}")

        # Calcul précision/rappel
        if len(common) + len(extra) > 0:
            precision = len(common) * 100 / (len(common) + len(extra))
            print(f"Précision: {precision:.2f}%")

        if len(common) + len(missing) > 0:
            recall = len(common) * 100 / (len(common) + len(missing))
            print(f"Rappel:    {recall:.2f}%")

        if len(common) + len(extra) > 0 and len(common) + len(missing) > 0:
            precision = len(common) * 100 / (len(common) + len(extra))
            recall = len(common) * 100 / (len(common) + len(missing))
            if precision + recall > 0:
                f1 = 2 * (precision * recall) / (precision + recall)
                print(f"F1-Score:  {f1:.2f}%")

        print("=" * 80)

        return status

def main():
    if len(sys.argv) != 3:
        print("Usage: python3 compare_classification.py <fichier_chrpp> <fichier_pellet>")
        print()
        print("Exemple:")
        print("  python3 compare_classification.py res_classification classification_pellet_OWL2RL-11.txt")
        sys.exit(1)

    chrpp_file = sys.argv[1]
    pellet_file = sys.argv[2]

    # Vérifier que les fichiers existent
    if not Path(chrpp_file).exists():
        print(f"ERREUR: Le fichier CHR++ '{chrpp_file}' n'existe pas.")
        sys.exit(1)

    if not Path(pellet_file).exists():
        print(f"ERREUR: Le fichier Pellet '{pellet_file}' n'existe pas.")
        sys.exit(1)

    # Créer le comparateur et lancer la comparaison
    comparator = ClassificationComparator(chrpp_file, pellet_file)
    exit_code = comparator.compare_results()

    sys.exit(exit_code)

if __name__ == "__main__":
    main()
