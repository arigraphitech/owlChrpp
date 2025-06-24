# Makefile - pour ParserProject

# Répertoire de build
BUILD_DIR := build

# Nom de l'exécutable
TARGET := ParserProject

# Commande cmake
CMAKE := cmake

.PHONY: all build run clean rebuild

all: build

build:
	@echo "🔨 Compilation du projet..."
	$(CMAKE) -B$(BUILD_DIR) -S. && $(CMAKE) --build $(BUILD_DIR)

run: build
	@echo "🚀 Exécution de $(TARGET)..."
	./$(BUILD_DIR)/$(TARGET)

# Compilation de owl.cpp en exécutable "owl"
owl: owl.cpp
	g++ -std=c++17 -I../../chrpp/runtime owl.cpp -o owl -L../../cowl/lib -L../../cowl/build/lib/ulib -lcowl -l:ulib.a

# Exécution de owl
run-owl: owl
	./owl

clean:
	@echo "🧹 Nettoyage..."
	rm -rf $(BUILD_DIR)

rebuild: clean build
