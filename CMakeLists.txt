cmake_minimum_required(VERSION 3.14)

project(ParserProject LANGUAGES C CXX)

# Active le C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Mode Release par défaut avec optimisations -O3
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Options de compilation
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    add_compile_options(-Wall -Wpedantic)
endif()

# === PROFILAGE GPROF ===
# Décommenter pour activer gprof (ralentit beaucoup l'exécution)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pg")
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pg")

# Active les traces CHR++ (définit la macro TRACE_ON)
# DÉSACTIVÉ pour la performance
#add_compile_definitions(TRACE_ON)

# === Partie CHRPP ===
# Si chrppc est disponible, owl.cpp est régénéré automatiquement dans le répertoire
# de build à chaque modification de owlFunctional.chrpp (garantit la cohérence des versions).
# Sinon, owl.cpp pré-généré depuis le dépôt est utilisé en fallback.

set(CHR_FILE ${CMAKE_CURRENT_SOURCE_DIR}/owlFunctional.chrpp)

if(NOT DEFINED CHRPP_ROOT)
    if(DEFINED ENV{CHRPP_ROOT})
        set(CHRPP_ROOT "$ENV{CHRPP_ROOT}")
    else()
        set(CHRPP_ROOT "${CMAKE_SOURCE_DIR}/../chrpp")
    endif()
endif()
# Chercher chrppc dans les deux emplacements possibles :
#   - build out-of-source : chrpp/build/chrppc/chrppc
#   - build in-source     : chrpp/chrppc/chrppc
if(EXISTS ${CHRPP_ROOT}/build/chrppc/chrppc)
    set(CHRPP_COMPILER ${CHRPP_ROOT}/build/chrppc/chrppc)
else()
    set(CHRPP_COMPILER ${CHRPP_ROOT}/chrppc/chrppc)
endif()
set(CHRPP_RUNTIME ${CHRPP_ROOT}/runtime)
set(CHRPP_BUILD_RUNTIME ${CHRPP_ROOT}/build/runtime)

# Vérifier que le runtime CHR++ existe (OBLIGATOIRE)
if(NOT EXISTS ${CHRPP_RUNTIME})
    message(FATAL_ERROR
        "CHR++ runtime non trouvé à ${CHRPP_RUNTIME}\n"
        "Le runtime CHR++ est REQUIS pour compiler owl.cpp (même pré-généré).\n"
        "Solution:\n"
        "  1. Cloner CHR++ : git clone https://gitlab.com/vynce/chrpp.git\n"
        "  2. Compiler CHR++ : cd chrpp && mkdir build && cd build && cmake .. && make\n"
        "  3. Spécifier: cmake -DCHRPP_ROOT=/chemin/vers/chrpp ..\n"
        "  4. Ou définir: export CHRPP_ROOT=/chemin/vers/chrpp\n"
        "Voir INSTALL.md pour plus de détails.")
endif()

# Vérifier que chrpp.hh a été généré (dans build/runtime/)
if(NOT EXISTS ${CHRPP_BUILD_RUNTIME}/chrpp.hh)
    message(FATAL_ERROR
        "chrpp.hh non trouvé dans ${CHRPP_BUILD_RUNTIME}\n"
        "CHR++ doit être compilé pour générer chrpp.hh depuis chrpp.in.hh.\n"
        "Solution:\n"
        "  cd ${CHRPP_ROOT}\n"
        "  mkdir -p build && cd build\n"
        "  cmake ..\n"
        "  make\n"
        "Voir INSTALL.md pour plus de détails.")
endif()

# Inclut le runtime CHR++ (source et build pour les headers générés)
include_directories(${CHRPP_RUNTIME})
include_directories(${CHRPP_BUILD_RUNTIME})

if(EXISTS ${CHRPP_COMPILER})
    message(STATUS "CHR++ complet trouvé: ${CHRPP_COMPILER}")
    message(STATUS "  - Runtime: ${CHRPP_RUNTIME} ✓")
    message(STATUS "  - Compiler: ${CHRPP_COMPILER} ✓")
    message(STATUS "  → owl.cpp sera régénéré automatiquement depuis owlFunctional.chrpp")
    # Générer owl.cpp dans le répertoire de build (évite de polluer les sources)
    set(OWL_CPP ${CMAKE_BINARY_DIR}/owl.cpp)
    add_custom_command(
        OUTPUT ${OWL_CPP}
        COMMAND ${CHRPP_COMPILER} ${CHR_FILE} -t -sout > ${OWL_CPP}
        DEPENDS ${CHR_FILE}
        COMMENT "Génération de owl.cpp depuis owlFunctional.chrpp"
    )
else()
    message(STATUS "CHR++ runtime trouvé: ${CHRPP_RUNTIME} ✓")
    message(STATUS "CHR++ compiler non trouvé (chrppc)")
    message(STATUS "  → Utilisation de owl.cpp pré-généré (depuis le dépôt)")
    set(OWL_CPP ${CMAKE_SOURCE_DIR}/owl.cpp)
endif()

# Ajoute COWL comme sous-module (inclut aussi uLib)
add_subdirectory(lib/cowl EXCLUDE_FROM_ALL)

link_directories(${CMAKE_SOURCE_DIR}/lib/cowl/build/lib/ulib)
# Ajoute les fichiers sources de ton projet
add_executable(ParserProject
    parsercowl.h
    Parser.h
    AnySimpleType.h
    ${OWL_CPP}
)

# Lier la lib COWL (et uLib automatiquement)
target_link_libraries(ParserProject PRIVATE cowl)

target_link_libraries(ParserProject PRIVATE cowl ulib)

# Inclure les headers de COWL
target_include_directories(ParserProject PRIVATE lib/cowl/include)
# Inclut les headers du projet (Parser.h, parsercowl.h)
target_include_directories(ParserProject PRIVATE ${CMAKE_SOURCE_DIR})
