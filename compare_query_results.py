#!/usr/bin/env python3
"""
Comparateur de résultats de requêtes SPARQL
Compare les résultats du raisonneur CHR++ avec les résultats de référence Pellet+Jena
"""

import sys
import re
from pathlib import Path
from typing import Dict, Set, Tuple, List
from collections import defaultdict

class QueryComparator:
    def __init__(self, chrpp_file: str, pellet_dir: str):
        self.chrpp_file = Path(chrpp_file)
        self.pellet_dir = Path(pellet_dir)
        
        # Mapping des IDs de requêtes CHR++ vers les fichiers Pellet
        # ID 0 -> Query 2, ID 1 -> Query 3, etc.
        self.query_mapping = {
            0: ("query02", "isMemberOf"),
            1: ("query03", "isPartOf"),
            2: ("query04", "hasAge"),
            3: ("query05", "T20CricketFan"),
            4: ("query07", "hasAlumnus"),
            5: ("query08", "isAffiliatedOrganizationOf"),
            6: ("query09", "hasCollegeDiscipline NonScience"),
            7: ("query10", "hasCollaborationWith"),
            8: ("query11", "isAdvisedBy"),
            9: ("query12", "Person"),
            10: ("query13", "WomanCollege"),
            11: ("query14", "LeisureStudent"),
            12: ("query15", "isHeadOf"),
            13: ("query16", "hasHead"),
            14: ("query19", "Faculty"),
            15: ("query20", "hasSameHomeTownWith"),
            16: ("query21", "Engineering Students (complex)"),
            17: ("query22", "Complex Students"),
        }
        
    def parse_chrpp_results(self) -> Dict[int, Set[Tuple[str, ...]]]:
        """Parse les résultats du fichier sortie.txt du raisonneur CHR++"""
        results = defaultdict(set)
        
        with open(self.chrpp_file, 'r', encoding='utf-8') as f:
            for line in f:
                line = line.strip()
                # Format attendu: "ID : URI1  URI2" ou "ID : URI1"
                match = re.match(r'^(\d+)\s*:\s*(.+)$', line)
                if match:
                    query_id = int(match.group(1))
                    result_str = match.group(2).strip()
                    
                    # Séparer les URIs (peut être 1 ou 2 colonnes)
                    parts = result_str.split()
                    
                    # Filtrer les résultats vides (emptyString)
                    parts = [p for p in parts if p and p != "emptyString"]
                    
                    if parts:
                        # Normaliser les URIs (enlever les < > si présents)
                        normalized = tuple(p.strip('<>') for p in parts)
                        results[query_id].add(normalized)
        
        return results
    
    def parse_pellet_results(self, query_file: str) -> Set[Tuple[str, ...]]:
        """Parse les résultats d'un fichier Pellet"""
        results = set()
        pellet_file = self.pellet_dir / query_file
        
        if not pellet_file.exists():
            return results
        
        with open(pellet_file, 'r', encoding='utf-8') as f:
            for line in f:
                line = line.strip()
                if not line:
                    continue
                
                # Les résultats Pellet sont séparés par des tabulations ou espaces
                parts = line.split()
                
                if parts:
                    # Normaliser les URIs
                    normalized = tuple(p.strip('<>') for p in parts)
                    results.add(normalized)
        
        return results
    
    def normalize_uri(self, uri: str) -> str:
        """Normalise une URI pour la comparaison"""
        # Enlever les < > et espaces
        uri = uri.strip('<> \t\n\r')
        # Standardiser les variations d'URIs
        return uri
    
    def compare_results(self) -> None:
        """Compare les résultats et affiche un rapport détaillé"""
        print("="*80)
        print("COMPARAISON DES RÉSULTATS DE REQUÊTES SPARQL")
        print("="*80)
        print(f"Fichier CHR++: {self.chrpp_file}")
        print(f"Dossier Pellet: {self.pellet_dir}")
        print("="*80)
        print()
        
        # Parser les résultats CHR++
        chrpp_results = self.parse_chrpp_results()
        
        # Statistiques globales
        total_queries = len(self.query_mapping)
        correct_queries = 0
        queries_with_missing = 0
        queries_with_extra = 0
        total_missing = 0
        total_extra = 0
        total_correct = 0
        
        # Comparer chaque requête
        for query_id in sorted(self.query_mapping.keys()):
            query_num, query_name = self.query_mapping[query_id]
            pellet_file = f"OWL2RL-11_{query_num}.txt"
            
            print(f"Query {query_id} ({query_name}):")
            print(f"  Fichier Pellet: {pellet_file}")
            
            # Récupérer les résultats
            chrpp_set = chrpp_results.get(query_id, set())
            pellet_set = self.parse_pellet_results(pellet_file)
            
            # Calculer les différences
            missing = pellet_set - chrpp_set  # Dans Pellet mais pas dans CHR++
            extra = chrpp_set - pellet_set    # Dans CHR++ mais pas dans Pellet
            common = chrpp_set & pellet_set   # Communs aux deux
            
            # Afficher les statistiques
            print(f"  CHR++ : {len(chrpp_set):4d} résultats")
            print(f"  Pellet: {len(pellet_set):4d} résultats")
            print(f"  Commun: {len(common):4d} résultats")
            
            # Vérifier si parfaitement identiques
            if missing or extra:
                if missing:
                    print(f"  ⚠ MANQUANTS: {len(missing):4d} résultats")
                    queries_with_missing += 1
                    total_missing += len(missing)
                    if len(missing) <= 10:  # Afficher seulement si <= 10
                        for result in sorted(missing)[:10]:
                            print(f"      - {' | '.join(result)}")
                    else:
                        print(f"      (Trop de résultats pour tout afficher)")
                        # Afficher les 5 premiers
                        for result in sorted(missing)[:5]:
                            print(f"      - {' | '.join(result)}")
                        print(f"      ... et {len(missing) - 5} autres")
                
                if extra:
                    print(f"  ⚠ EN TROP  : {len(extra):4d} résultats")
                    queries_with_extra += 1
                    total_extra += len(extra)
                    if len(extra) <= 10:
                        for result in sorted(extra)[:10]:
                            print(f"      + {' | '.join(result)}")
                    else:
                        print(f"      (Trop de résultats pour tout afficher)")
                        for result in sorted(extra)[:5]:
                            print(f"      + {' | '.join(result)}")
                        print(f"      ... et {len(extra) - 5} autres")
                
                print(f"  ✗ DIFFÉRENT")
            else:
                if len(chrpp_set) == 0 and len(pellet_set) == 0:
                    print(f"  ✓ IDENTIQUE (aucun résultat)")
                else:
                    print(f"  ✓ IDENTIQUE")
                correct_queries += 1
                total_correct += len(common)
            
            print()
        
        # Rapport final
        print("="*80)
        print("RAPPORT FINAL")
        print("="*80)
        print(f"Total de requêtes testées: {total_queries}")
        print(f"Requêtes identiques:       {correct_queries} ({correct_queries*100/total_queries:.1f}%)")
        print(f"Requêtes avec manquants:   {queries_with_missing}")
        print(f"Requêtes avec résultats en trop: {queries_with_extra}")
        print()
        print(f"Total résultats corrects:  {total_correct}")
        print(f"Total résultats manquants: {total_missing}")
        print(f"Total résultats en trop:   {total_extra}")
        print()
        
        # Score de précision et rappel
        if total_correct + total_extra > 0:
            precision = total_correct * 100 / (total_correct + total_extra)
            print(f"Précision: {precision:.2f}%")
        
        if total_correct + total_missing > 0:
            recall = total_correct * 100 / (total_correct + total_missing)
            print(f"Rappel:    {recall:.2f}%")
        
        if precision > 0 or recall > 0:
            f1 = 2 * (precision * recall) / (precision + recall) if (precision + recall) > 0 else 0
            print(f"F1-Score:  {f1:.2f}%")
        
        print("="*80)
        
        # Retourner le code de sortie approprié
        return 0 if correct_queries == total_queries else 1

def main():
    if len(sys.argv) != 3:
        print("Usage: python3 compare_query_results.py <fichier_sortie_chrpp.txt> <dossier_pellet_results>")
        print()
        print("Exemple:")
        print("  python3 compare_query_results.py sortie.txt ../../../owl2bench/sparql_reference_results/pellet_results/OWL2RL-11")
        sys.exit(1)
    
    chrpp_file = sys.argv[1]
    pellet_dir = sys.argv[2]
    
    # Vérifier que les fichiers existent
    if not Path(chrpp_file).exists():
        print(f"ERREUR: Le fichier CHR++ '{chrpp_file}' n'existe pas.")
        sys.exit(1)
    
    if not Path(pellet_dir).exists():
        print(f"ERREUR: Le dossier Pellet '{pellet_dir}' n'existe pas.")
        sys.exit(1)
    
    # Créer le comparateur et lancer la comparaison
    comparator = QueryComparator(chrpp_file, pellet_dir)
    exit_code = comparator.compare_results()
    
    sys.exit(exit_code)

if __name__ == "__main__":
    main()
