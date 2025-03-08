# OS := $(shell uname -s)

# ifeq ($(OS),Darwin)
#     CXX := clang++
# else
#     CXX := g++
# endif

# CXXFLAGS := -w -std=c++17
# LDFLAGS  = 

# OBJDIR := obj
# BINDIR := bin

# SRCS   := $(shell find . -name "*.cpp")
# OBJS   := $(SRCS:%.cpp=$(OBJDIR)/%.o)
# DEPS   := $(OBJS:.o=.d)

# TARGET := $(BINDIR)/doublyLinkedList

# all: start $(TARGET) end

# start:
# 	@echo "====[$(shell date +%T)]  START BUILD ===="

# end:
# 	@echo "====[$(shell date +%T)]  END BUILD ===="

# $(TARGET): $(OBJS)
# 	@mkdir -p $(BINDIR)
# 	@$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)

# $(OBJDIR)/%.o: %.cpp
# 	@mkdir -p $(OBJDIR)
# 	@$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

# -include $(DEPS)

# clean:
# 	@$(RM) -r $(OBJDIR) $(BINDIR)
# 	@echo CLEAN DONE

# -----------------------------------------------

# Lista de módulos
MODULES = $(basename $(wildcard */))

# Compilar todos os módulos
all: $(MODULES)

# Compilar um módulo específico
$(MODULES):
	$(MAKE) -C $@

# Limpeza global
clean:
	for dir in $(MODULES); do $(MAKE) -C $$dir clean; done

.PHONY: all clean $(MODULES)
