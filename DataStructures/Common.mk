# Compilador e flags
CXX = g++
CXXFLAGS = -w -std=c++17

# Diretórios
OBJ_DIR = obj
BIN_DIR = bin

# Nome do módulo (recebido do Makefile do módulo)
TARGET = $(BIN_DIR)/$(MODULE).exe

# Arquivos fonte e objetos
SRC_FILES = $(wildcard *.cpp)
OBJ_FILES = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Regra para criar diretórios e compilar objetos
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regra para criar o executável
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Regra principal
all: $(TARGET)

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean
