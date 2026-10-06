# Extract Space Calls Tool

## Overview
The `extract_space_calls` tool extracts the `space_calls.txt` trace file from an OWL ontology without running the full CHR++ reasoning engine (realisation and classification). This tool uses `parsercowl_spacecalls.h` which instruments the OWL parsing process to log all space-> method calls.

## Quick Start

### Using the Bash Wrapper Script
```bash
cd /path/to/owl2chr/owlChrpp
./extract_space_calls.sh <ontology_file> [output_dir]
```

**Example:**
```bash
./extract_space_calls.sh results/OWL2RL-1.ofn ./output
```

This will:
1. Compile the `extract_space_calls` executable (if not already built)
2. Parse the OWL ontology
3. Generate `space_calls.txt` in the build directory
4. Move it to the specified output directory

### Using the Compiled Executable Directly
```bash
cd build_test
./extract_space_calls <ontology_file>
```

## Files

### Main Components
- **`owlExtractSpaceCalls.chrpp`**: CHR++ source file that defines the main extraction logic
  - Based on `owlFunctional.chrpp` but uses `parsercowl_spacecalls.h`
  - Omits realisation and classification phases
  
- **`parsercowl_spacecalls.h`**: Instrumented parser header
  - Logs all `space->` method calls to `space_calls.txt`
  - Records axiom numbers and text to stderr
  - Pre-processes logical variables to avoid duplicates
  
- **`extract_space_calls.sh`**: Bash wrapper script for convenient invocation
  
- **`CMakeLists.txt`**: Build configuration (modified to include extract_space_calls target)

### Generated Files
- **`space_calls.txt`**: Output file containing all space-> calls in executable CHR++ format
  - Located in the build directory during compilation
  - Can be replayed or analyzed
  
## Output Format

The `space_calls.txt` file contains CHR++ code representing all space-> calls made during parsing:

```cpp
// Appels emis au moteur CHR++ pendant le parsing
chr::Logical_var<int> LogicalVar0;
space->logicalName(std::string("owl:Thing"), LogicalVar0);
...
space->owlObjectPropertyAssertion(LogicalVar123, LogicalVar456, LogicalVar789);
```

Each axiom is prefixed with a comment showing:
- Axiom number
- OWL axiom in Manchester syntax

## Performance Notes

- **Compilation**: First compilation takes ~1-2 minutes (depends on system)
- **Parsing**: Varies by ontology size (e.g., OWL2RL-1.ofn: ~2-3 minutes)
- **Output size**: Typically 3-6 MB for medium ontologies

## Differences from `parsercowl.h`

- **Logging**: Logs all space-> calls to stderr and `space_calls.txt`
- **Variable caching**: Checks existing space store before creating new logical variables
- **Error handling**: More strict error checking with explicit return codes
- **Performance**: Slightly slower due to logging overhead

## Building

### Automatic (via wrapper script)
```bash
./extract_space_calls.sh <ontology>
```

### Manual
```bash
mkdir build_test
cd build_test
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --target extract_space_calls
```

## Troubleshooting

**Issue**: `Échec du chargement de l'ontologie` (Failed to load ontology)
- **Solution**: Ensure the ontology path is correct (relative or absolute)

**Issue**: No space_calls.txt generated
- **Solution**: Check that parsing succeeded (look for "Parsing completed" message)

**Issue**: CMake configuration fails
- **Solution**: Ensure CHR++ runtime is available at `../chrpp/runtime`

## Usage Example

```bash
# Extract space_calls from a test ontology
./extract_space_calls.sh results/OWL2RL-1.ofn ./my_output

# The file will be at ./my_output/space_calls.txt
cat ./my_output/space_calls.txt
```

## Technical Details

The tool works by:
1. Creating an OWL2 CHR++ space
2. Pre-registering `owl:Thing` and `owl:Nothing` logical variables
3. Instantiating `ParserCowl<OWL2>` with `parsercowl_spacecalls.h`
4. Calling `parser.load()` which:
   - Opens `space_calls.txt` for writing
   - Iterates through all axioms in the ontology
   - Calls `PARSER_SPACE_CALL` macro for each space-> method invocation
   - Logs the method name and arguments before executing
   - Closes the file with a flush after every 256 calls

See the summary in the task history for more details on differences between `parsercowl.h` and `parsercowl_spacecalls.h`.
