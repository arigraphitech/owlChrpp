#!/usr/bin/env python3
"""Compare two text files while ignoring // comments and IRI namespaces."""

from __future__ import annotations

import argparse
import re
import sys
from collections import Counter
from pathlib import Path

HTTP_IRI_WITH_FRAGMENT_RE = re.compile(r"https?://[^\s\"'<>]*#([^\s\"'<>]*)")


def strip_cpp_line_comment(line: str) -> str:
    """Remove a // comment while preserving // inside quoted strings."""
    quote: str | None = None
    escaped = False

    for index, character in enumerate(line):
        if quote is not None:
            if escaped:
                escaped = False
            elif character == "\\":
                escaped = True
            elif character == quote:
                quote = None
        elif character in ("'", '"'):
            quote = character
        elif character == "/" and line[index + 1 : index + 2] == "/":
            return line[:index]

    return line


def normalize_iri_namespaces(line: str) -> str:
    """Replace an HTTP(S) IRI namespace with its fragment marker."""
    return HTTP_IRI_WITH_FRAGMENT_RE.sub(r"#\1", line)


def read_content_lines(path: Path) -> Counter[str]:
    """Return normalized non-empty lines and their occurrence counts."""
    lines: Counter[str] = Counter()

    try:
        with path.open(encoding="utf-8") as file:
            for line in file:
                content = strip_cpp_line_comment(line).strip()
                if content:
                    content = normalize_iri_namespaces(content)
                    lines[content] += 1
    except OSError as error:
        raise ValueError(f"Impossible de lire « {path} » : {error}") from error

    return lines


def print_lines(title: str, lines: Counter[str]) -> None:
    print(f"\n{title} : {sum(lines.values())} occurrence(s)")
    if not lines:
        print("  Aucune")
        return

    for line in sorted(lines):
        count = lines[line]
        suffix = f" (x{count})" if count > 1 else ""
        print(f"  {line}{suffix}")


def parse_arguments() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description=(
            "Compare deux fichiers texte en ignorant les commentaires // et "
            "les préfixes d'IRI HTTP(S) avant #."
        )
    )
    parser.add_argument("file1", type=Path, help="Premier fichier à comparer")
    parser.add_argument("file2", type=Path, help="Second fichier à comparer")
    return parser.parse_args()


def main() -> int:
    args = parse_arguments()

    for path in (args.file1, args.file2):
        if not path.is_file():
            print(f"ERREUR : « {path} » n'est pas un fichier accessible.", file=sys.stderr)
            return 2

    try:
        file1_lines = read_content_lines(args.file1)
        file2_lines = read_content_lines(args.file2)
    except ValueError as error:
        print(f"ERREUR : {error}", file=sys.stderr)
        return 2

    common = file1_lines & file2_lines
    only_file1 = file1_lines - file2_lines
    only_file2 = file2_lines - file1_lines

    print("=== Comparaison de fichiers ===")
    print(f"Fichier 1 : {args.file1}")
    print(f"Fichier 2 : {args.file2}")
    print("\n=== Résumé ===")
    print(f"Lignes prises en compte dans le fichier 1 : {sum(file1_lines.values())}")
    print(f"Lignes prises en compte dans le fichier 2 : {sum(file2_lines.values())}")
    print(f"Occurrences communes                    : {sum(common.values())}")

    print_lines(f"Présentes seulement dans {args.file1}", only_file1)
    print_lines(f"Présentes seulement dans {args.file2}", only_file2)

    return 0 if not only_file1 and not only_file2 else 1


if __name__ == "__main__":
    raise SystemExit(main())
