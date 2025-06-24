cmake_minimum_required(VERSION 3.14)

project(ParserProject LANGUAGES C CXX)

# Active le C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Options de compilation
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    add_compile_options(-Wall -Wpedantic)
endif()

# === Partie CHRPP ===
# Définis où se trouve CHRPP (adapte le chemin si nécessaire)
set(CHRPP_ROOT ${CMAKE_SOURCE_DIR}/../../chrpp)
set(CHRPP_COMPILER ${CHRPP_ROOT}/chrppc/chrppc)
set(CHRPP_COMPILER $ENV{HOME}/chrpp/chrppc/chrppc)
set(CHRPP_RUNTIME $ENV{HOME}/chrpp/runtime)

# Inclut le runtime CHRPP
include_directories(${CHRPP_RUNTIME})

# Fichier CHR++ source
set(CHR_FILE ${CMAKE_CURRENT_SOURCE_DIR}/owl.chrpp)
# Fichier C++ généré
set(GENERATED_CPP ${CMAKE_CURRENT_BINARY_DIR}/owl.cpp)

# Génère owl.cpp depuis owl.chrpp
add_custom_command(
    OUTPUT ${GENERATED_CPP}
    COMMAND ${CHRPP_COMPILER} ${CHR_FILE} -sout > ${GENERATED_CPP}
    DEPENDS ${CHR_FILE}
    COMMENT "⏳ Génération de ${GENERATED_CPP} depuis ${CHR_FILE} via chrppc"
)

# Ajoute COWL comme sous-module (inclut aussi uLib)
add_subdirectory(lib/cowl EXCLUDE_FROM_ALL)

link_directories(${CMAKE_SOURCE_DIR}/lib/cowl/build/lib/ulib)
# Ajoute les fichiers sources de ton projet
add_executable(ParserProject
    parsercowl.h
    Parser.h
    AnySimpleType.h
    stringType.h
    ${GENERATED_CPP} # Ajoute le fichier généré à la compilation
)

# Lier la lib COWL (et uLib automatiquement)
target_link_libraries(ParserProject PRIVATE cowl)

target_link_libraries(ParserProject PRIVATE cowl ulib)

# Inclure les headers de COWL
target_include_directories(ParserProject PRIVATE lib/cowl/include)
# Inclut les headers du projet (Parser.h, parsercowl.h)
target_include_directories(ParserProject PRIVATE ${CMAKE_SOURCE_DIR})
# Copie les fichiers d'ontologie dans le dossier de build
configure_file(example_pizza.owl example_pizza.owl COPYONLY)
configure_file(example2.ofn example2.ofn COPYONLY)
