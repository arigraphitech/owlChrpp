# OWL 2 RL Reasoner with CHR++

This project is a declarative reasoner for **OWL 2 RL** ontologies. It uses
**COWL** to parse ontologies in OWL Functional Syntax (`.ofn`) and **CHR++**
to apply the reasoning rules until complete saturation, before answering queries.

## Installation

On Ubuntu or Debian, install the system dependencies:

```bash
sudo apt update
sudo apt install -y build-essential cmake git
```

Use **CMake 3.16 or later** and a compiler supporting **C++20** to build CHR++.
The reasoner itself uses C++17.

Download and compile [CHR++](https://gitlab.com/vynce/chrpp):

```bash
mkdir -p ~/projects
cd ~/projects
git clone https://gitlab.com/vynce/chrpp.git
cd chrpp
cmake -S . -B . -DEXAMPLES=OFF -DTESTS=OFF
cmake --build . --target chrppc -j2
cd ..
```

Clone this project next to `chrpp`, replacing `<repository-url>` with the
repository URL:

```bash
git clone --recurse-submodules "<repository-url>" reasoner
cd reasoner
```

The recursive clone downloads **COWL** and its dependencies. They are built
automatically when compiling the project; no separate installation is needed.
Continue with the **Build** section before the first run.

## Run

Once the executable has been compiled, run it from the project root:

```bash
./build/ParserProject results/OWL2RL-10.ofn
```

**For initial tests, use `results/OWL2RL-10.ofn`.** It contains more than
8,000 axioms (9,072 in the supplied file) and runs almost instantly.

For large ontologies, increase the stack limit **in the same terminal** before
starting the program:

```bash
ulimit -s unlimited
./build/ParserProject results/OWL2RL-1.ofn
```

The program displays the elapsed time and writes results in the **current
working directory**. Each execution replaces the previous output files:

| File | Contents |
|---|---|
| `res_realisation` | Classes inferred for each individual. |
| `res_classification` | Inferred strict subclass relationships. |
| `res_queries` | Results of the translated SPARQL queries, prefixed by query ID. |

## Build

From the project root:

```bash
git submodule update --init --recursive
cmake -S . -B build -DCHRPP_ROOT="$(pwd -P)/../chrpp"
cmake --build build --target ParserProject -j2
```

These commands assume CHR++ is in the sibling directory `../chrpp`.
Otherwise, replace the value of `CHRPP_ROOT` with its absolute path.
CMake generates the C++ code from `owlFunctional.chrpp` and builds
`build/ParserProject`.

## Choose the reasoning tasks and queries

The calls to execute are in **`main()` of
[`owlFunctional.chrpp`](owlFunctional.chrpp)**. Currently, it calls both
**realisation** and **classification**, followed by a series of **18 SPARQL
queries from the OWL2Bench benchmark, translated into CHR++ query calls**.
For example:

```cpp
space->realisation();
space->classification();

space->queryObjAssertionUri(queryUri("isMemberOf"));
space->queryDataAssertionUri(queryUri("hasAge"));
space->queryInstancesURI(queryUri("Faculty"));
```

To disable a task or query, comment out its call:

```cpp
// space->classification();
// space->queryObjAssertionUri(queryUri("isMemberOf"));
```

You can add other translated query calls in the same block, using the query
functions and `queryUri(...)` for names in the ontology namespace. New query
patterns can be added by defining their CHR++ translation and calling it here.

After changing `owlFunctional.chrpp`, recompile before running:

```bash
cmake --build build --target ParserProject -j2
./build/ParserProject results/OWL2RL-10.ofn
```

## Validate the results

See the **[`validation/` folder and its README](validation/README.md)** for the
comparison scripts and the complete procedure to generate Pellet references
with OWL2Bench, then compare realisation, classification and SPARQL results
for the same ontology.
