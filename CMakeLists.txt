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
# owl.cpp est pré-généré et commité dans le dépôt.
# IMPORTANT: Les headers CHR++ (runtime) sont TOUJOURS nécessaires pour compiler owl.cpp
# Le compilateur chrppc est optionnel : nécessaire uniquement si owlFunctional.chrpp est modifié.
#
# Pour régénérer owl.cpp après modification de owlFunctional.chrpp :
#   cmake -DCHRPP_ROOT=/chemin/vers/chrpp ..
#   make generate_owl_cpp
# Ou via variable d'environnement : export CHRPP_ROOT=/chemin/vers/chrpp

set(OWL_CPP ${CMAKE_SOURCE_DIR}/owl.cpp)
set(CHR_FILE ${CMAKE_CURRENT_SOURCE_DIR}/owlFunctional.chrpp)

if(NOT DEFINED CHRPP_ROOT)
    if(DEFINED ENV{CHRPP_ROOT})
        set(CHRPP_ROOT "$ENV{CHRPP_ROOT}")
    else()
        set(CHRPP_ROOT "${CMAKE_SOURCE_DIR}/../chrpp")
    endif()
endif()
set(CHRPP_COMPILER ${CHRPP_ROOT}/chrppc/chrppc)
set(CHRPP_RUNTIME ${CHRPP_ROOT}/runtime)

# Vérifier que le runtime CHR++ existe (OBLIGATOIRE)
if(NOT EXISTS ${CHRPP_RUNTIME})
    message(FATAL_ERROR 
        "CHR++ runtime non trouvé à ${CHRPP_RUNTIME}\n"
        "Le runtime CHR++ est REQUIS pour compiler owl.cpp (même pré-généré).\n"
        "Solution:\n"
        "  1. Cloner CHR++ : git clone <url_chrpp> ../chrpp\n"
        "  2. Ou spécifier: cmake -DCHRPP_ROOT=/chemin/vers/chrpp ..\n"
        "  3. Ou définir: export CHRPP_ROOT=/chemin/vers/chrpp\n"
        "Voir INSTALL.md pour plus de détails.")
endif()

# Inclut le runtime CHR++ (nécessaire pour compiler owl.cpp)
include_directories(${CHRPP_RUNTIME})

if(EXISTS ${CHRPP_COMPILER})
    message(STATUS "CHR++ complet trouvé: ${CHRPP_COMPILER}")
    message(STATUS "  - Runtime: ${CHRPP_RUNTIME} ✓")
    message(STATUS "  - Compiler: ${CHRPP_COMPILER} ✓")
    message(STATUS "  → Régénération de owl.cpp possible via 'make generate_owl_cpp'")
    # Cible explicite pour régénérer owl.cpp dans la racine du projet
    add_custom_target(generate_owl_cpp
        COMMAND ${CHRPP_COMPILER} ${CHR_FILE} -t -sout > ${OWL_CPP}
        DEPENDS ${CHR_FILE}
        COMMENT "Régénération de owl.cpp depuis owlFunctional.chrpp"
    )
else()
    message(STATUS "CHR++ runtime trouvé: ${CHRPP_RUNTIME} ✓")
    message(STATUS "CHR++ compiler non trouvé (chrppc)")
    message(STATUS "  → Utilisation de owl.cpp pré-généré (lecture seule)")
    message(STATUS "  → Pour modifier owlFunctional.chrpp, installer chrppc complet")
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
