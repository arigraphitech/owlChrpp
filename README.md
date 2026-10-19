#  OWL 2 RL Declarative Reasoner based on CHR++

Our tool is a declarative inference engine for OWL 2 RL ontologies, built on top of **CHR++** (Constraint Handling Rules) and the **COWL** C library for OWL 2 parsing.

## Description

This project implements an inference and reasoning engine for OWL 2 (Web Ontology Language) ontologies. It combines:
- **CHR++**: Constraint handling rules system for logical inference
- **COWL**: C library for OWL 2 ontology parsing
- **Query system**: Query interface to interrogate ontologies

### Supported OWL 2 RL Inferences

- **Class hierarchy**: SubClassOf, EquivalentClass, transitivity
- **Object properties**: SubObjectProperty, transitivity, symmetry, inverse
- **Data properties**: SubDataProperty, domains, ranges, XSD types
- **Complex classes**:
  - IntersectionOf (conjunction)
  - UnionOf (disjunction)
  - ComplementOf (negation)
  - ObjectSomeValuesFrom (∃R.C)
  - ObjectAllValuesFrom (∀R.C)
  - DataSomeValuesFrom, DataAllValuesFrom
  - ObjectMaxCardinality, DataMaxCardinality
  - HasValue, OneOf, HasKey
- **Individuals**: SameIndividual, DifferentIndividuals
- **Constraints**: DisjointClasses, DisjointProperties
- **owl:Thing** and **owl:Nothing**

### Query System

1. **querySuperClassOfUri(URI)** — Retrieves all superclasses of a class (including owl:Thing)
2. **querySubClassOfUri(URI)** — Retrieves all subclasses of a class
3. **queryClassificationUri(URI)** — Retrieves all classes an individual is an instance of
4. **queryInstanceURI(IndividualURI, ClassURI)** — Checks if an individual is an instance of a class
5. **queryInstancesURI(ClassURI)** — Lists all individuals of a class

---

## Installation

See [INSTALL.md](INSTALL.md) for full installation instructions.

### Requirements

- **CMake** ≥ 3.14
- **GCC/G++** with C++17 support
- **Git**
- **COWL** (OWL 2 library — included as a submodule)
- **CHR++** compiler (`chrppc`) and runtime
  - Repository: https://gitlab.com/vynce/chrpp
  - Must be compiled **in-source** (see below)

> **CHR++ guards**: the compiler can reorder guards before some partner lookups. Guards must not modify program state. In particular, adding a deferred consequence to a queue belongs in the rule body, after all premises have matched.

### Quick Install

```bash
# 1. Clone and build CHR++ in-source (IMPORTANT: no build/ subdirectory)
cd ~/projects
git clone https://gitlab.com/vynce/chrpp.git
cd chrpp
cmake .      # in-source build — chrppc will be at chrpp/chrppc/chrppc
make
cd ..

# 2. Clone the repository with submodules
git clone --recurse-submodules "<repository-url>" reasoner
cd reasoner

# 3. Build (Release: -O3 -DNDEBUG; LTO when supported)
cmake -S . -B build -DCHRPP_ROOT="$(pwd -P)/../chrpp"
cmake --build build --target ParserProject -j2

# 4. Run (from the project root)
./build/ParserProject results/OWL2RL-10.ofn
```

If CHR++ is not in `../chrpp` (sibling directory), specify the path:
```bash
cmake -DCHRPP_ROOT=/absolute/path/to/chrpp -S . -B build
```

The build generates `build/owl.cpp` from `owlFunctional.chrpp`, then compiles
`build/ParserProject`. A fresh build requires `chrppc`; if CMake reports that it
cannot find it, correct `CHRPP_ROOT` and configure again. An existing generated
file does not incorporate subsequent changes to the CHR++ source.

---

## Input Format

The engine accepts **OWL 2 Functional Syntax** (`.ofn`) only:

```
Prefix(ex:=<http://example.org#>)
Ontology(
    Declaration(Class(ex:Student))
    SubClassOf(ex:PhDStudent ex:Student)
    ClassAssertion(ex:Student ex:Alice)
    ObjectPropertyAssertion(ex:enrolledIn ex:Alice ex:Math101)
)
```

### Converting from Other Formats (RDF/XML, Turtle, Manchester, etc.)

Use **ROBOT CLI** to convert any OWL format to OWL Functional Syntax:

#### Install ROBOT

```bash
# Download the ROBOT jar
curl -L https://github.com/ontodev/robot/releases/latest/download/robot.jar -o robot.jar

# Create a wrapper script (Linux/macOS)
echo '#!/bin/sh' > robot
echo "java -jar $(pwd)/robot.jar \"\$@\"" >> robot
chmod +x robot
sudo mv robot /usr/local/bin/robot
```

Requires Java 11+. Verify: `java -version`

#### Convert to OWL Functional Syntax

```bash
# From RDF/XML (.owl, .rdf)
robot convert --input my_ontology.owl --format ofn --output my_ontology.ofn

# From Turtle (.ttl)
robot convert --input my_ontology.ttl --format ofn --output my_ontology.ofn

# From Manchester Syntax (.omn)
robot convert --input my_ontology.omn --format ofn --output my_ontology.ofn

# From OWL/XML (.owx)
robot convert --input my_ontology.owx --format ofn --output my_ontology.ofn
```

Supported input formats: `owl` (RDF/XML), `ttl` (Turtle), `omn` (Manchester), `owx` (OWL/XML), `obo`, `json` (OWL/JSON).

---

## Usage

### Basic Execution

```bash
# Run from the project root
./build/ParserProject [ontology_file.ofn]
```

If no file is specified, `results/OWL2RL-1.ofn` is used by default, relative to
the current working directory. Pass an explicit input path for small tests.

### Large Ontologies: Increase the Stack Limit

**Before running large ontologies such as `OWL2RL-1.ofn` or `OWL2RL-2.ofn`, run
`ulimit -s unlimited` in the same terminal.** This is especially important with
immediate transitivity, whose rule calls can use a deep C++ stack.

```bash
# From the project root, in the terminal that will run the reasoner:
ulimit -s unlimited
ulimit -s                 # should display: unlimited
time ./build/ParserProject results/OWL2RL-1.ofn
```

The setting applies to the current shell and its child processes. Repeat it
when opening another terminal; running it in a different shell does not change
the stack limit of the reasoner launched here.

### Rule Variants

The current source files contain:

| Source | Object-property symmetry | Object-property transitivity |
|---|---|---|
| `owlFunctional.chrpp` | Standard CHR rule. | Immediate: consequences are posted in the rule body. |
| `owlFunctional_v0.chrpp` | Uses `firstSymmetricDerivation` to process each unordered pair once per property. | Deferred: consequences are queued in the rule body and saturated after parsing, before queries. |

The deferred variant also includes the inverse-cycle rule for the two self-pairs.
Its transitivity guards check a hash set of queued consequences before CHR++
records propagation history. These checks are read-only; queue insertion remains
in the rule body, after all partners have matched. This avoids retaining a
history entry for every alternative path to an already queued consequence.
Both variants include the union subclass rule, corrected query IRIs, buffered
result files, and the execution clock. The reasoning computes a complete
saturation before answering queries.

CMake selects the source through `CHR_FILE` in `CMakeLists.txt`. Check its value
before building: editing the other variant does not change `build/ParserProject`.
To switch variants, select the desired file in `CHR_FILE`, then configure
and compile in a separate build directory. Always check which transitivity
rule is present in the selected source when switching variants.

### Result Files and Timing

Each execution creates or replaces these files **in the current working
directory**:

| File | Contents |
|---|---|
| `res_realisation` | Individual/class pairs. |
| `res_classification` | Strict subclass pairs, with equivalent-class pairs filtered out. |
| `res_queries` | Query results in the form `ID : value1 value2`. |

The three output streams are opened once at startup, used throughout the run,
and closed automatically when the process exits. Results are not printed to
the console. The console retains `temps <seconds>` for the timed parsing,
saturation, classification, realisation and query phases. Parser debug output
and CHR++ traces are disabled in the normal performance configuration.

### Comparing Generated Text Files

Use `validation/compare_text_files.py` to identify content exclusive to each file and
their common occurrences:

```bash
python3 validation/compare_text_files.py file1.txt file2.txt
```

The comparison ignores `//` comments (including trailing comments) and URI
namespaces for HTTP(S) IRIs with a fragment. For example,
`http://benchmark/OWL2Bench#BasketBall` and
`https://kracr.iiitd.edu.in/OWL2Bench#BasketBall` are treated as identical.

### Test Ontologies (OWL2Bench)

The project includes OWL2Bench benchmark ontologies in `results/`:

| File | Size | Generated by | Use |
|------|------|--------------|-----|
| `OWL2RL-11.ofn` | 206 KB (very small) | Intermediate dataset | Quick testing, debugging |
| `OWL2RL-10.ofn` | 749 KB (small) | Intermediate dataset | **Recommended for development testing** |
| `OWL2RL-1.ofn` | 3.2 MB (large) | OWL2Bench (1 university) | Full benchmarking |
| `OWL2RL-2.ofn` | 6.3 MB (very large) | OWL2Bench (2 universities) | Performance stress testing |

**Note**: Files 11 and 10 are intermediate-size datasets created for practical testing purposes. Files 1 and 2 are official OWL2Bench-generated ontologies where the number corresponds to the **number of universities** in the ontology (1 university = 3.2 MB, 2 universities = 6.3 MB).

### Query Examples

The benchmark queries, realisation and classification are already called in
`main()`. Query IRIs are built with `queryUri`, using the namespace found by
`parser.getQueryNamespace()` in the parsed ontology (`isMemberOf`). This supports
the different namespaces used by the included benchmark files.

```cpp
// Inside the existing main(), after saturation and definition of queryUri:
space->queryObjAssertionUri(queryUri("isMemberOf"));
space->queryInstancesURI(queryUri("Faculty"));
space->realisation();
space->classification();
```

When constructing an IRI manually, preserve its surrounding `<...>` because
that is the form stored in the parser's `logicalName` constraints.

---

## Architecture

### Project Structure

```
reasoner/
├── owlFunctional.chrpp    # CHR++ rules (main source file)
├── owlFunctional_v0.chrpp # Alternative rules (see Rule Variants)
├── parsercowl.h           # COWL parser for OWL 2
├── Parser.h               # Generic parsing interface
├── AnySimpleType.h        # XSD data types
├── CMakeLists.txt         # Build configuration
├── results/               # OWL2Bench test ontologies
├── validation/            # Comparison scripts and Pellet validation guide
├── lib/cowl/              # COWL (Git submodule)
└── build/                 # Generated owl.cpp, ParserProject and build files
```

### Build Workflow

```
owlFunctional.chrpp
       ↓  (chrppc — auto-triggered by make when .chrpp changes)
 build/owl.cpp
       ↓  (g++ -std=c++17 -O3 -DNDEBUG, with LTO when supported)
 build/ParserProject
```

---

## Tests and Benchmarks

### Comparer deux fichiers texte

Le script ignore les lignes vides ainsi que les lignes dont le premier contenu est
`//`. Les lignes restantes sont comparées comme des occurrences : une même ligne
répétée est donc comptée autant de fois dans le résumé et les différences.

```bash
python3 validation/compare_text_files.py file1.txt file2.txt
```

Le code de sortie vaut `0` si les fichiers sont identiques après filtrage, `1`
s'ils diffèrent et `2` en cas d'erreur de lecture ou d'argument.

### Running CHR++ Tests

Reasoning tasks are configured in `main()` of the selected CHR++ source.
Classification, realisation and the benchmark queries are currently enabled:

#### Classification (CT) — Class Hierarchy

```cpp
space->classification();
```

Writes strict SubClassOf pairs to `res_classification`, filtering equivalent-class pairs.

#### Realisation (CR) — Individual Types

```cpp
space->realisation();
```

Writes inferred individual/class pairs to `res_realisation`.

#### SPARQL Queries

```cpp
space->queryObjAssertionUri(queryUri("isMemberOf"));
space->queryInstancesURI(queryUri("T20CricketFan"));
// ... etc.
```

Results are written to `res_queries`.

### Recompile and Run

```bash
cmake --build build --target ParserProject -j2
./build/ParserProject results/OWL2RL-10.ofn
```

---

## Reference Results (Pellet + Jena)

For the complete procedure, see [Validation with OWL2Bench and Pellet](validation/README.md):
generate realisation, classification and SPARQL references from the same input,
then compare them with the three scripts provided in this repository. The guide
uses the integrated `owl2bench/` directory and keeps each validation run under
`build/validation/`.

Reference results were generated with **Pellet** (OWL reasoner) and **Apache Jena** (SPARQL queries).

### Classification — Pellet

```bash
cd owl2bench/
java -jar "Experiments/java runnable jar files/pellet.jar" OWL2RL-10.owl classification > classification_pellet10.txt
```

### Realisation — Pellet

```bash
java -jar "Experiments/java runnable jar files/pellet.jar" OWL2RL-10.owl realisation > realisation_pellet10.txt
```

### SPARQL Queries — Apache Jena + Pellet

Reference directories are stored under
`owl2bench/sparql_reference_results/pellet_results/`. Use the directory for
the exact ontology being compared. The checked-in directories currently include
`OWL2RL-1` and `OWL2RL-11`; generate references for `OWL2RL-10` when needed.
The comparison directory must be named after the dataset (for example,
`OWL2RL-11`) and contain its `OWL2RL-11_queryNN.txt` files.

---

## Comparing Results

Run the following commands from the project root and compare
outputs generated from the same ontology.

### Classification — compare_classification.py

```bash
python3 validation/compare_classification.py res_classification owl2bench/classification_pellet10.txt
```

Le comparateur accepte les paires `SubClass SuperClass` ainsi que les lignes
`<SubClass> SubClassOf <SuperClass>` (avec ou sans chevrons autour de `owl:Thing`).

### Realisation — compare_instances.py

```bash
python3 validation/compare_instances.py <chrpp_output> <gold_file>
```

### SPARQL Queries — compare_query_results.py

```bash
python3 validation/compare_query_results.py <chrpp_queries_file> <pellet_results_dir>

# Example using the small ontology and its corresponding references:
./build/ParserProject results/OWL2RL-11.ofn
python3 validation/compare_query_results.py res_queries owl2bench/sparql_reference_results/pellet_results/OWL2RL-11
```

---

## Development

### Parser Output and CHR++ Traces

The normal executable accepts an input path and an optional second path for
`axiomLog`:

```bash
./build/ParserProject results/OWL2RL-11.ofn owl2rl11-axioms.log
```

Parser logging is disabled by default (`PARSER_DEBUG` is commented out in
`parsercowl.h`), so this optional file can remain empty. It does not enable CHR++
tracing. The current `main()` has no third argument for a CHR++ trace file.

To investigate CHR++ activity, enable trace generation (`--trace` for `chrppc`),
register the desired `chr::Log` flags in `main()` and select an output stream.
Remove this diagnostic configuration and rebuild before measuring performance.
Keep side effects such as inserting or queuing assertions in rule bodies,
not in guards.

### Modifying CHR++ Rules

1. Edit `owlFunctional.chrpp`
2. Recompile: `cmake --build build --target ParserProject -j2`
3. CMake regenerates `build/owl.cpp`; share the edited CHR++ source, not the build directory.

### Adding a New Query

```chrpp
// In owlFunctional.chrpp

// 1. Declare the constraint
<chr_constraint>
    myNewQuery(+std::string)
</chr_constraint>

// 2. Add passive deduplication rule
myNewQuery(X) #passive \ myNewQuery(X) <=> true ;;

// 3. Implement query logic
myNewQuery(URI), logicalName(URI,X) ==>
    res(someResult) ;;
```
