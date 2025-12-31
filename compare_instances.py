#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys
from collections import defaultdict

# ---------------------------
# Normalisation
# ---------------------------

ANGLE_IRI_RE = re.compile(r"^<([^>]+)>$")

def norm_iri(s: str) -> str:
    """Normalise une IRI : enlève <...> si présent + strip."""
    s = s.strip()
    m = ANGLE_IRI_RE.match(s)
    return m.group(1) if m else s


# ---------------------------
# Parse file1: "individu class" OU "individu class1 class2 ..."
# (on supporte plusieurs classes sur une même ligne)
# ---------------------------

def parse_file1(path: str) -> dict[str, set[str]]:
    data: dict[str, set[str]] = defaultdict(set)
    with open(path, "r", encoding="utf-8") as f:
        for lineno, line in enumerate(f, 1):
            line = line.strip()
            if not line or line.startswith("#"):
                continue

            parts = line.split()
            if len(parts) < 2:
                print(f"[file1] Ligne {lineno} ignorée (format invalide): {line}", file=sys.stderr)
                continue

            ind = norm_iri(parts[0])

            # IMPORTANT: on ajoute toutes les classes après l'individu
            for token in parts[1:]:
                cls = norm_iri(token)
                if cls:
                    data[ind].add(cls)

    return data


# ---------------------------
# Parse file2: "<ind> -> Nodeset[Node(...), ...]"
# Supporte le cas bizarre: Node( <uri1> <uri2> )
# ---------------------------

NODE_RE = re.compile(r"Node\(\s*(.*?)\s*\)")
LEFT_IND_RE = re.compile(r"^\s*<([^>]+)>\s*->")
IRI_ANYWHERE_RE = re.compile(r"<([^>]+)>")

def parse_file2(path: str, ignore_owl_thing: bool = True) -> dict[str, set[str]]:
    data: dict[str, set[str]] = defaultdict(set)

    with open(path, "r", encoding="utf-8") as f:
        for lineno, line in enumerate(f, 1):
            line = line.strip()
            if not line or line.startswith("#"):
                continue

            # individu (à gauche)
            m = LEFT_IND_RE.match(line)
            if m:
                ind = m.group(1)
            else:
                if "->" not in line:
                    print(f"[file2] Ligne {lineno} ignorée (pas de '->'): {line}", file=sys.stderr)
                    continue
                left = line.split("->", 1)[0].strip()
                ind = norm_iri(left)

            # extraire les Node(...)
            nodes = NODE_RE.findall(line)
            if not nodes:
                print(f"[file2] Ligne {lineno} ignorée (aucun Node(...)): {line}", file=sys.stderr)
                continue

            for raw in nodes:
                raw = raw.strip()

                # ✅ Cas normal + cas anormal: Node contient plusieurs IRIs
                iris = IRI_ANYWHERE_RE.findall(raw)

                if iris:
                    # si raw contient une ou plusieurs IRIs, on les ajoute toutes
                    if len(iris) > 1:
                        # debug utile (optionnel)
                        print(f"[file2] Ligne {lineno}: Node avec {len(iris)} IRIs (split): {raw}", file=sys.stderr)

                    for uri in iris:
                        uri = uri.strip()
                        if ignore_owl_thing and uri == "owl:Thing":
                            continue
                        data[ind].add(uri)
                else:
                    # fallback: QName style "owl:Thing"
                    cls = raw
                    if ignore_owl_thing and cls == "owl:Thing":
                        continue
                    data[ind].add(cls)

    return data


# ---------------------------
# Compare with file2 as reference (gold)
# ---------------------------

def compare(file1_map: dict[str, set[str]], gold_map: dict[str, set[str]]) -> None:
    inds1 = set(file1_map.keys())
    inds_gold = set(gold_map.keys())

    missing_inds_in_file1 = sorted(inds_gold - inds1)   # individus attendus (gold) mais absents dans file1
    extra_inds_in_file1   = sorted(inds1 - inds_gold)   # individus présents dans file1 mais pas dans gold

    print("=== Résumé individus (gold = fichier2) ===")
    print(f"Individus dans gold (fichier2): {len(inds_gold)}")
    print(f"Individus dans fichier1:        {len(inds1)}")
    print(f"Individus manquants dans file1: {len(missing_inds_in_file1)}")
    print(f"Individus inconnus dans file1:  {len(extra_inds_in_file1)}")
    print()

    if missing_inds_in_file1:
        print("=== Individus manquants dans fichier1 (extraits) ===")
        for ind in missing_inds_in_file1[:50]:
            print(ind)
        if len(missing_inds_in_file1) > 50:
            print(f"... (+{len(missing_inds_in_file1)-50} autres)")
        print()

    if extra_inds_in_file1:
        print("=== Individus présents dans fichier1 mais absents du gold (extraits) ===")
        for ind in extra_inds_in_file1[:50]:
            print(ind)
        if len(extra_inds_in_file1) > 50:
            print(f"... (+{len(extra_inds_in_file1)-50} autres)")
        print()

    # Différences de classes par individu (sur intersection)
    common = sorted(inds_gold & inds1)

    nb_ind_with_diff = 0
    total_missing_classes = 0  # classes attendues (gold) mais absentes file1
    total_extra_classes = 0    # classes en trop (file1) vs gold

    print("=== Différences de classes (gold = fichier2) ===")
    for ind in common:
        gold = gold_map[ind]
        got  = file1_map[ind]

        missing = sorted(gold - got)  # ce que file1 devrait avoir mais n'a pas
        extra   = sorted(got - gold)  # ce que file1 a mais ne devrait pas

        if missing or extra:
            nb_ind_with_diff += 1
            total_missing_classes += len(missing)
            total_extra_classes += len(extra)

            print(f"\n--- {ind} ---")
            if missing:
                print(f"  Manquantes dans fichier1 ({len(missing)}):")
                for c in missing[:100]:
                    print(f"    - {c}")
                if len(missing) > 100:
                    print(f"    ... (+{len(missing)-100} autres)")
            if extra:
                print(f"  En trop dans fichier1 ({len(extra)}):")
                for c in extra[:100]:
                    print(f"    + {c}")
                if len(extra) > 100:
                    print(f"    ... (+{len(extra)-100} autres)")

    print("\n=== Résumé classes ===")
    print(f"Individus communs comparés:              {len(common)}")
    print(f"Individus avec au moins une différence:  {nb_ind_with_diff}")
    print(f"Total classes manquantes dans fichier1:  {total_missing_classes}")
    print(f"Total classes en trop dans fichier1:     {total_extra_classes}")


def main():
    if len(sys.argv) < 3:
        print("Usage: compare_gold.py <fichier1.txt> <fichier2_gold.txt> [--keep-owl-thing]", file=sys.stderr)
        sys.exit(2)

    file1_path = sys.argv[1]
    gold_path  = sys.argv[2]
    ignore_owl_thing = True

    if len(sys.argv) >= 4 and sys.argv[3] == "--keep-owl-thing":
        ignore_owl_thing = False

    file1_map = parse_file1(file1_path)
    gold_map  = parse_file2(gold_path, ignore_owl_thing=ignore_owl_thing)

    compare(file1_map, gold_map)


if __name__ == "__main__":
    main()
