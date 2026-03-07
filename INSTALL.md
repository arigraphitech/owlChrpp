# Installation Guide - owlChrpp (owl2chr)

This guide details the complete installation of owlChrpp / owl2chr, a declarative reasoning engine for OWL 2 RL based on CHR++.

## Table of Contents

1. [System Requirements](#system-requirements)
2. [Installing Dependencies](#installing-dependencies)
3. [Installing CHR++](#installing-chr)
4. [Installing the Project](#installing-the-project)
5. [Installation Verification](#installation-verification)
6. [Troubleshooting](#troubleshooting)

---

## System Requirements

### Supported Operating Systems

- **Linux** (Ubuntu 20.04+, Debian 10+, Fedora 32+)
- **macOS** 10.15+ (Catalina or newer)
- **Windows** (via WSL2 recommended)

### Required Software

| Software | Minimum Version | Recommended Version |
|----------|----------------|---------------------|
| **CMake** | 3.14 | 3.20+ |
| **GCC/G++** | 9.0 (C++17) | 11.0+ |
| **Git** | 2.20 | 2.30+ |
| **Make** | 4.0 | 4.3+ |

---

## Installing Dependencies

### Ubuntu / Debian

```bash
sudo apt update && sudo apt upgrade -y
sudo apt install -y build-essential cmake git

# Check versions
gcc --version      # Must be ≥ 9.0
cmake --version    # Must be ≥ 3.14
```

### Fedora / Red Hat / CentOS

```bash
sudo dnf groupinstall "Development Tools" -y
sudo dnf install cmake git -y
```

### macOS

```bash
brew install cmake git gcc
```

### Windows (WSL2)

```bash
wsl --install -d Ubuntu
# Inside WSL2, follow the Ubuntu instructions above
```

---

## Installing CHR++

CHR++ provides two components:
1. **Runtime** (headers: `chrpp.hh`, `logical_var.hpp`, etc.) → required to compile `owl.cpp`
2. **Compiler `chrppc`** → required to regenerate `owl.cpp` after modifying `owlFunctional.chrpp`

### Required Version

> **Important**: This project requires CHR++ **commit `a9ebc45` or later** (guard generation fix, February 2, 2026).
> The current `master` branch (`v1.7.0-44` or newer) is suitable.
> Versions older than this commit generate incorrect guards and produce erroneous inference results.

### Step 1: Clone CHR++

Clone CHR++ in the **parent folder** of the project (or anywhere, by setting `CHRPP_ROOT`):

```bash
# Recommended: next to the owlChrpp project
cd ~/projects
git clone https://gitlab.com/vynce/chrpp.git
cd chrpp

# Check the version (must be >= a9ebc45)
git log --oneline -3
```

### Step 2: Compile CHR++ In-Source

CHR++ **must be compiled in-source** (cmake directly in the chrpp folder, without a `build/` subdirectory) so that `chrppc` is accessible at the correct path (`chrpp/chrppc/chrppc`):

```bash
cd ~/projects/chrpp

# In-source compilation (IMPORTANT: do not create a build/ subdirectory)
cmake .
make
```

**Verify that chrppc is generated**:
```bash
ls chrppc/chrppc
# Should display: chrppc/chrppc
```

### Step 3: Configure CHRPP_ROOT

If CHR++ is **not** in the `../chrpp` folder relative to the project, set the environment variable:

```bash
# Add to ~/.bashrc
export CHRPP_ROOT=/absolute/path/to/chrpp
source ~/.bashrc
```

CMakeLists searches for chrppc in this order:
1. `$CHRPP_ROOT/chrppc/chrppc`
2. `../chrpp/chrppc/chrppc` (default path, relative to the project)

---

## Installing the Project

### 1. Clone the Repository

```bash
git clone --recurse-submodules https://github.com/arigraphitech/owlChrpp.git
cd owlChrpp

# If submodules are not initialized:
git submodule sync --recursive
git submodule update --init --recursive
```

### 2. Configure and Compile

```bash
# Configure (Release with -O3 by default)
cmake -S . -B build

# Compile (automatically regenerates owl.cpp if owlFunctional.chrpp has changed)
cd build && make
```

If `CHRPP_ROOT` is not in the environment, specify the path:
```bash
cmake -DCHRPP_ROOT=/path/to/chrpp -S . -B build
cd build && make
```

**Expected output**:
```
-- CHR++ found: .../chrpp/chrppc/chrppc (owl.cpp regeneration enabled)
-- Configuring done
...
[100%] Built target ParserProject
```

### Compilation Mode

The project compiles in **Release with -O3** by default. To force explicitly:
```bash
cmake -DCMAKE_BUILD_TYPE=Release -S . -B build
```

For a debug build (without optimizations, with assertions):
```bash
cmake -DCMAKE_BUILD_TYPE=Debug -S . -B build
```

---

## Installation Verification

### Test 1: Executable Created

```bash
ls -lh build/ParserProject
```

### Test 2: Execution with Example Ontology

```bash
# Run from the project root (relative path to results/)
./build/ParserProject results/OWL2RL-11.ofn
```

**Expected output**:
```
temps 0.XX
```

### Test 3: Larger Ontology

```bash
./build/ParserProject results/OWL2RL-10.ofn
```

---

## Recompilation After Modifications

### Modifying CHR++ Rules

```bash
# 1. Edit owlFunctional.chrpp
nano owlFunctional.chrpp

# 2. Recompile (owl.cpp automatically regenerated if chrppc is available)
cd build && make

# 3. Test
cd ..
./build/ParserProject results/OWL2RL-11.ofn
```

### Complete Clean

```bash
rm -rf build
cmake -S . -B build
cd build && make
```

---

## Troubleshooting

### Problem 1: `chrppc not found`

```
-- chrppc not found - using pre-generated owl.cpp (read-only)
```

This means `chrppc` is not found. The project will still compile with pre-generated `owl.cpp`, but modifications to `owlFunctional.chrpp` will have no effect.

**Solutions**:
```bash
# Check that chrppc exists
ls $CHRPP_ROOT/chrppc/chrppc

# If absent, recompile chrpp in-source
cd /path/to/chrpp
cmake .
make

# Then reconfigure
cmake -DCHRPP_ROOT=/path/to/chrpp -S . -B build
cd build && make
```

### Problem 2: "C++17 required" Error

```bash
sudo apt install g++-11
export CXX=g++-11 CC=gcc-11
```

### Problem 3: Empty COWL Submodule

```
fatal error: cowl.h: No such file or directory
```

```bash
git submodule update --init --recursive
```

### Problem 4: Runtime Crash

```
Assertion `_backtrack_depth <= Backtrack::depth()' failed.
```

Probable cause: CHR++ version too old (prior to commit `a9ebc45`).

```bash
cd /path/to/chrpp
git log --oneline | grep "a9ebc45"
# If absent, update chrpp:
git pull
cmake .
make

# Regenerate owl.cpp and recompile
cd /path/to/owlChrpp/build
make
```

### Problem 5: COWL Submodule — uLib Linking Error

```
undefined reference to `ulib_*`
```

```bash
cd lib/cowl && rm -rf build && mkdir build && cd build
cmake .. && make
cd ../../..
rm -rf build && cmake -S . -B build && cd build && make
```

### Problem 6: Out of Memory During Compilation

```bash
make -j2   # Reduce parallelism
```

---

## Final Directory Structure

```
<parent-folder>/
    chrpp/                    # CHR++ (v1.7.0-44 or newer, in-source build)
        chrppc/
            chrppc            # CHR++ compiler
        runtime/              # CHR++ runtime headers

    owlChrpp/                 # This project
        owlFunctional.chrpp   # CHR++ rules (main source)
        owl.cpp               # Generated by chrppc from owlFunctional.chrpp
        parsercowl.h          # COWL parser
        CMakeLists.txt
        lib/
            cowl/             # COWL Git submodule
        build/                # Build directory (generated)
            ParserProject     # Final executable
        results/              # OWL2Bench test ontologies
```

---

**Need help?** Open an issue on [GitHub](https://github.com/arigraphitech/owlChrpp/issues).
