CXX=g++
CXXFLAGS=$(DEBUG) $(OPTI) -std=c++14 -Wall -Wextra -pedantic
BIN=exe
LIB="/lib/antlr/antlr_runtime/dist/libantlr4-runtime.a"
INCLUDE="/lib/antlr/antlr_runtime/runtime/Cpp/run/usr/local/include/antlr4-runtime"



SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

all: $(OBJ)
	$(CXX) -o $(BIN) -I $(INCLUDE) $(LIB) $^

.PHONY: clean grammar

clean:
	rm -f *.o
	rm $(BIN)

grammar:
	./.antlr4.sh -visitor -no-listener -Dlanguage=Cpp cmmp.g4


