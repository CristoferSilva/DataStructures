OS := $(shell uname -s)

# Choose compiler according OS
ifeq ($(OS),Darwin)
    CXX := clang++
else
    CXX := g++
endif

CXXFLAGS = -w -std=c++17

# Directories
OBJ_DIR = obj
BIN_DIR = bin

# Module name
ifeq ($(OS),Darwin)
    TARGET = $(BIN_DIR)/$(MODULE)
else
    TARGET = $(BIN_DIR)/$(MODULE).exe
endif

SRC_FILES = $(wildcard *.cpp)
OBJ_FILES = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Rule to create directory and compile objects
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Target to create executable
$(TARGET): $(OBJ_FILES)
	@$(CXX) $(CXXFLAGS) $^ -o $@

all: $(TARGET)

clean:
	@rm -rf $(OBJ_DIR) $(BIN_DIR)
	@echo clean done for $(MODULE)

.PHONY: all clean