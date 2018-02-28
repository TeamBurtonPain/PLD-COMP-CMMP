CXX=g++
CXXFLAGS=$(DEBUG) $(OPTI) -std=c++14 -Wall -Wextra -pedantic
BIN=exe

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

all: $(OBJ)
	$(CXX) -o $(BIN) $^

.PHONY: clean

clean:
	rm -f *.o
	rm $(BIN)

