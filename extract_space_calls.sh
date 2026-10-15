#!/bin/bash
# Compile and run the space_calls extractor from an OWL ontology

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# Check if CMakeLists.txt exists
if [ ! -f CMakeLists.txt ]; then
    echo "Error: CMakeLists.txt not found. Run this script from the owlChrpp directory."
    exit 1
fi

# Check ontology argument
if [ $# -lt 1 ]; then
    echo "Usage: $0 <ontology_file> [output_dir]"
    echo "  ontology_file: Path to the OWL ontology file (.owl, .ofn, .rdf)"
    echo "  output_dir: Directory where space_calls.txt will be saved (default: current dir)"
    exit 1
fi

ONTO_FILE="$1"
OUTPUT_DIR="${2:-.}"

# Verify ontology file exists
if [ ! -f "$ONTO_FILE" ]; then
    echo "Error: Ontology file not found: $ONTO_FILE"
    exit 1
fi

# Convert paths to absolute paths (before changing directories)
ONTO_FILE="$(cd "$(dirname "$ONTO_FILE")" && pwd)/$(basename "$ONTO_FILE")"
OUTPUT_DIR="$(mkdir -p "$OUTPUT_DIR" && cd "$OUTPUT_DIR" && pwd)"

# Build directory
BUILD_DIR="build_spacecalls"
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

# Run CMake if needed
if [ ! -f CMakeCache.txt ]; then
    echo "Configuring CMake..."
    cmake .. -DCMAKE_BUILD_TYPE=Release
fi

# Compile
echo "Compiling extract_space_calls..."
cmake --build . --target extract_space_calls -- -j$(nproc) 2>&1 | tail -5

# Run the extractor
echo ""
echo "Extracting space_calls from ontology: $ONTO_FILE"
./extract_space_calls "$ONTO_FILE" 2>&1 | grep -E "^(Extracting|Parsing|✓)" || true

# Move output to destination
if [ -f space_calls.txt ]; then
    mv space_calls.txt "$OUTPUT_DIR/"
    echo ""
    echo "✓ space_calls.txt saved to: $OUTPUT_DIR/space_calls.txt"
    echo "  File size: $(wc -c < "$OUTPUT_DIR/space_calls.txt") bytes"
    echo "  Lines: $(wc -l < "$OUTPUT_DIR/space_calls.txt")"
else
    echo "Error: space_calls.txt was not generated"
    exit 1
fi
