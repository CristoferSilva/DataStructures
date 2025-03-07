OS := $(shell uname -s)

ifeq ($(OS),Darwin)
    CXX = clang++
    CXXFLAGS = -Wall -Wextra -O2 -std=c++17
else
    CXX = g++
    CXXFLAGS = -Wall -Wextra -O2 -std=c++17
endif

SRCS = main.cpp	DoublyLinkedList/DoublyLinkedList.cpp

# TODO 1- Busca recursiva por todos os arquivos .cpp e .h em todas as subpastas
# TODO 2- Organizar todos os objs e dependencies file em uma única pasta (obj e deps)

OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

TARGET = app_executable

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	$(CXX) -MM $(CXXFLAGS) $< > $(@:.o=.d)

-include $(DEPS)

clean:
	rm -f $(OBJS) $(TARGET) $(DEPS)
