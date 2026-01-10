# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

ParserProject is an OWL 2 semantic reasoner implemented using **CHR++** (Constraint Handling Rules) with the **COWL** library for parsing OWL 2 ontologies. The system performs logical inference on OWL 2 ontologies and provides a query interface for semantic reasoning.

### Key Technologies

- **CHR++**: Constraint handling rules system - compiles `.chrpp` files to C++ code for constraint-based reasoning
- **COWL**: C library for parsing and working with OWL 2 ontologies (included as git submodule in `lib/cowl/`)
- **OWL 2 Functional Syntax**: Primary ontology format (`.ofn` files)

## Build System

### Building the Project

```bash
# Standard build
make build

# Clean build
make rebuild

# Run the executable
make run
```

The build process involves two compilation steps:
1. **CHR++ compilation**: `owlFunctional.chrpp` → `owl.cpp` (via `chrppc` compiler)
2. **C++ compilation**: `owl.cpp` + headers → `ParserProject` executable

### CMake Configuration

The project uses CMake with these key settings:
- C++17 standard required
- TRACE_ON macro defined for CHR++ debugging
- CHR++ compiler path: `/home/etud/Téléchargements/stage/chrpp/chrppc/chrppc`
- CHR++ runtime headers: `/home/etud/Téléchargements/stage/chrpp/runtime`
- COWL library built as subdirectory from `lib/cowl/`

### Important Build Notes

- The `owl.cpp` file is **auto-generated** from `owlFunctional.chrpp` - never edit it directly
- COWL is a git submodule - use `git clone --recursive` when cloning
- Example ontology files (`example2.ofn`, `example_pizza.owl`) are copied to build directory

## Architecture

### Core Files

**CHR++ Rule Engine**
- `owlFunctional.chrpp` (~866 lines): Main CHR++ rules implementing OWL 2 inference logic
  - Constraint declarations (lines 269+)
  - OWL 2 reasoning rules (SubClassOf, EquivalentClass, ObjectProperty, DataProperty, etc.)
  - Query system implementation (lines 707+)
  - Main function with test queries (lines 822+)

**Parser Layer**
- `parsercowl.h` (~2785 lines): COWL library wrapper for parsing OWL 2 ontologies
  - Template class `ParserCowl<T>` that loads ontologies into CHR++ constraint stores
  - XSD datatype mapping (`XSDType` enum, `mapXsdType()`)
  - COWL callback handlers for axioms, classes, properties, individuals
  - Debug macros controlled by `PARSER_DEBUG`

**Type System**
- `AnySimpleType.h` (~395 lines): XSD datatype hierarchy implementation
  - Base class `AnySimpleType` with inheritance-based type verification
  - Complete XSD type hierarchy (Integer, Decimal, String, Boolean, Date, etc.)
  - `Value` struct combining string values with type information

**Generic Interface**
- `Parser.h`: Abstract parser template interface

### CHR++ Constraint Store Structure

The CHR++ rules define constraints representing OWL 2 constructs:
- `owlSubclassOf(A, B)`: Class hierarchy
- `owlClassAssertion(Individual, Class, true)`: Individual class membership
- `owlObjectPropertyAssertion(Subject, Property, Object)`: Object property assertions
- `owlDataPropertyAssertion(Subject, Property, Value)`: Data property assertions
- `owlIntersectionClass`, `owlUnionClass`, `owlComplementClass`: Complex class expressions
- `owlObjectSomeValuesFrom`, `owlObjectAllValuesFrom`: Existential/universal restrictions
- Plus many more OWL 2 axiom types

### Query System

Five main query functions (defined around line 326 in `owlFunctional.chrpp`):

1. **querySuperClassOfUri(URI)** - Get all superclasses of a class (including owl:Thing)
2. **querySubClassOfUri(URI)** - Get all subclasses of a class
3. **queryClassificationUri(URI)** - Get all classes an individual belongs to
4. **queryInstanceURI(IndividualURI, ClassURI)** - Check if individual is instance of class
5. **queryInstancesURI(ClassURI)** - List all individuals of a class

Queries work by:
- Taking URI strings as input
- Resolving URIs to logical variables via `logicalName` constraint
- Triggering CHR++ rules that propagate through the constraint store
- Collecting results via the `res()` constraint

## Development Workflow

### Modifying CHR++ Rules

1. Edit `owlFunctional.chrpp`
2. Run `make build` - this automatically regenerates `owl.cpp` via CHR++ compiler
3. Test with ontology files

**CHR++ Rule Pattern Example:**
```chrpp
// Declare constraint
<chr_constraint>
    myConstraint(+std::string, +std::string)
</chr_constraint>

// Prevent duplicates with passive rule
myConstraint(X, Y) #passive \ myConstraint(X, Y) <=> true ;;

// Inference rule: if A and B, then C
constraintA(X), constraintB(X, Y) ==> constraintC(Y) ;;
```

### Running with Different Ontologies

```bash
# Default: runs with results/OWL2RL-11.ofn (hardcoded in main())
./build/ParserProject

# Specify ontology file
./build/ParserProject path/to/ontology.ofn
```

### Testing and Validation

- `compare_instances.py`: Python script to compare reasoning results between systems (e.g., ParserProject vs Pellet)
- Test ontologies in `results/`: OWL2RL-1.ofn, OWL2RL-2.ofn, OWL2RL-11.ofn, onto_test.ofn
- Example ontologies: `example2.ofn` (academic domain), `example_pizza.owl` (pizza ontology)

### Debugging

**Enable CHR++ tracing:**
- Already enabled via `TRACE_ON` in CMakeLists.txt
- Controlled at runtime: `chr::Log::register_flags(chr::Log::ALL)` in main()

**Enable parser debugging:**
- Uncomment `#define PARSER_DEBUG` in `parsercowl.h` (line 12)
- Rebuild project

**Output files:**
- `res2.txt`: Query results output file
- `sortie.txt`: General output

## OWL 2 Reasoning Features

The system implements these OWL 2 inferences:

- **Class hierarchy**: SubClassOf transitivity, EquivalentClass
- **Object properties**: SubObjectProperty, transitivity, symmetry, inverse properties
- **Data properties**: SubDataProperty, domains, ranges, XSD type checking
- **Complex classes**: IntersectionOf, UnionOf, ComplementOf, ObjectSomeValuesFrom, ObjectAllValuesFrom, cardinalities, HasValue, OneOf
- **Individuals**: SameIndividual, DifferentIndividuals
- **Constraints**: DisjointClasses, DisjointProperties
- **Built-in classes**: owl:Thing, owl:Nothing

## Common Patterns

### Adding a New Query Function

1. Declare constraint in `<chr_constraint>` block (~line 326):
   ```chrpp
   myNewQuery(+std::string)
   ```

2. Add passive rule to prevent duplicates (~line 410):
   ```chrpp
   myNewQuery(URI) #passive \ myNewQuery(URI) <=> true ;;
   ```

3. Implement query logic (~line 707+):
   ```chrpp
   myNewQuery(URI), logicalName(URI, X) #passive ==>
       // Query logic using X
       res(result) ;;
   ```

4. Add query call in `main()` function (~line 822)

### Working with COWL Parser

The `ParserCowl<T>` template class bridges COWL's C API to CHR++ constraints:
- COWL parses OWL 2 syntax → triggers callbacks
- Callbacks insert constraints into CHR++ store
- CHR++ rules fire automatically for inference

Key methods:
- `load()`: Parse ontology file and populate constraint store
- Callback handlers (e.g., `on_axiom()`, `on_class()`) convert COWL objects to constraints

## Translating SPARQL Queries to CHR++ Rules

The project implements a pattern for translating SPARQL queries into CHR++ constraint rules. The general approach involves:

1. **URI-based query function**: Takes URI strings as parameters
2. **Resolution to logical variables**: Converts URIs to CHR++ logical variables via `logicalName`
3. **Query execution**: Uses intermediate constraint with unique ID
4. **Result collection**: Gathers results into `ResultSet` with `makeSet()`

### Simple Query Patterns

**Pattern 1: Object Property Assertion Query** (2 variables)
```sparql
SELECT DISTINCT ?x ?y WHERE { ?x :propertyName ?y }
```

CHR++ translation:
```chrpp
// Declaration
<chr_constraint>
    queryObjAssertionUri(+std::string),
    queryObjAssertion(?std::string, +int)
</chr_constraint>

// Passive rule
queryObjAssertionUri(URIP) #passive \ queryObjAssertionUri(URIP) <=> true ;;

// Resolution and execution
logicalName(URIP, P) \ queryObjAssertionUri(URIP) <=>
    queryObjAssertion(P, get_next_id()) ;;

// Collect results
queryObjAssertion(P, ID),
owlObjectPropertyAssertion(X, P, Y),
logicalName(URIX, X) #passive,
logicalName(URIY, Y) #passive
==> ResultSet(makeSet(URIX, URIY), ID) ;;

// Success marker
queryObjAssertion(P, ID) <=> success() ;;
```

**Pattern 2: Data Property Assertion Query** (value retrieval)
```sparql
SELECT DISTINCT ?x ?y WHERE { ?x :hasAge ?y }
```

CHR++ translation:
```chrpp
logicalName(URIP, P) \ queryDataAssertionUri(URIP) <=>
    queryDataAssertion(P, get_next_id()) ;;

queryDataAssertion(P, ID),
owlDataPropertyAssertion(X, P, Y),
logicalName(URIX, X)
==> ResultSet(makeSet(URIX, valueToString(Y)), ID) ;;
```

**Pattern 3: Class Membership Query** (1 variable)
```sparql
SELECT DISTINCT ?x WHERE { ?x rdf:type :ClassName }
```

CHR++ translation:
```chrpp
logicalName(URIC, C) \ queryInstancesURI(URIC) <=>
    queryInstances(C, get_next_id()) ;;

queryInstances(C, ID),
owlClassAssertion(X, C, true),
logicalName(URIX, X) #passive
==> ResultSet(makeSet(URIX, emptyString), ID) ;;

queryInstances(C, ID) <=> success() ;;
```

**Pattern 4: Property with Fixed Object** (subject retrieval)
```sparql
SELECT DISTINCT ?x WHERE { ?x :hasCollegeDiscipline :Engineering }
```

CHR++ translation:
```chrpp
logicalName(URIP, P), logicalName(URIO, O) \
queryObjAssertionSubjectUri(URIP, URIO) <=>
    queryObjAssertionSubject(P, O, get_next_id()) ;;

queryObjAssertionSubject(P, O, ID),
owlObjectPropertyAssertion(X, P, O),
logicalName(URIX, X) #passive
==> ResultSet(makeSet(URIX, emptyString), ID) ;;

queryObjAssertionSubject(P, O, ID) <=> success() ;;
```

### Complex Query Pattern (Multiple Joins)

For queries with multiple triple patterns and intermediate variables:

```sparql
SELECT DISTINCT ?x ?y WHERE {
    ?x rdf:type :Student .
    ?x :isStudentOf ?y .
    ?y :isPartOf ?z .
    ?z :hasCollegeDiscipline :Engineering
}
```

CHR++ translation:
```chrpp
// 1. Declaration (add to <chr_constraint> block around line 358)
queryComplexStudentEngineering(+std::string, +std::string, +std::string,
                                +std::string, +std::string),
queryComplexStudentEng(?std::string, ?std::string, ?std::string,
                       ?std::string, ?std::string, +int)

// 2. Passive rule (around line 420)
queryComplexStudentEngineering(S, IsStud, IsPart, HasDisc, Eng) #passive \
queryComplexStudentEngineering(S, IsStud, IsPart, HasDisc, Eng) <=> true ;;

// 3. URI resolution (around line 780)
logicalName(URIStudent, Student),
logicalName(URIIsStudentOf, IsStudentOf),
logicalName(URIIsPartOf, IsPartOf),
logicalName(URIHasDisc, HasDisc),
logicalName(URIEng, Eng) \
queryComplexStudentEngineering(URIStudent, URIIsStudentOf, URIIsPartOf,
                               URIHasDisc, URIEng) <=>
    queryComplexStudentEng(Student, IsStudentOf, IsPartOf, HasDisc, Eng,
                           get_next_id()) ;;

// 4. Query execution with joins
queryComplexStudentEng(StudentClass, IsStudentOf, IsPartOf, HasDisc,
                       Engineering, ID),
owlClassAssertion(X, StudentClass, true),
owlObjectPropertyAssertion(X, IsStudentOf, Y),
owlObjectPropertyAssertion(Y, IsPartOf, Z),
owlObjectPropertyAssertion(Z, HasDisc, Engineering),
logicalName(URIX, X) #passive,
logicalName(URIY, Y) #passive
==> ResultSet(makeSet(URIX, URIY), ID) ;;

// 5. Success marker
queryComplexStudentEng(StudentClass, IsStudentOf, IsPartOf, HasDisc,
                       Engineering, ID) <=> success() ;;
```

**Calling the query in main():**
```cpp
space->queryComplexStudentEngineering(
    std::string("https://kracr.iiitd.edu.in/OWL2Bench#Student"),
    std::string("https://kracr.iiitd.edu.in/OWL2Bench#isStudentOf"),
    std::string("https://kracr.iiitd.edu.in/OWL2Bench#isPartOf"),
    std::string("https://kracr.iiitd.edu.in/OWL2Bench#hasCollegeDiscipline"),
    std::string("https://kracr.iiitd.edu.in/OWL2Bench#Engineering")
);
```

### Key Translation Principles

1. **Variable Mapping**: SPARQL variables (?x, ?y, ?z) become CHR++ logical variables (X, Y, Z)
2. **Intermediate Variables**: Variables not in SELECT (like ?z above) are still needed for joins but not returned
3. **Result Tuples**: Use `makeSet(var1, var2)` for 2-tuples, or `makeSet(var, emptyString)` for single values
4. **Unique IDs**: `get_next_id()` ensures each query execution is tracked separately
5. **Passive Markers**: `#passive` on `logicalName` prevents rule re-triggering during result collection
6. **CHR++ Joins**: Multiple constraints in rule body perform natural join on shared variables

## File Locations

- Main CHR++ rules: `owlFunctional.chrpp`
- Parser implementation: `parsercowl.h`
- Type system: `AnySimpleType.h`
- Build directory: `build/` (generated, not in git)
- Test ontologies: `results/*.ofn`, `example*.ofn`, `example*.owl`
- COWL library: `lib/cowl/` (git submodule)
