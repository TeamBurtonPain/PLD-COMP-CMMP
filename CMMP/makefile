CXX=g++
CXXFLAGS=$(FLAGS) $(INCLUDES)
FLAGS=$(DEBUG) $(OPTI) -std=c++14 -Wall -Wextra -pedantic
LIB="/lib/antlr/antlr_runtime/runtime/Cpp/run/usr/local/lib/libantlr4-runtime.a"
INCLUDES=-I"/lib/antlr/antlr_runtime/runtime/src" -I"./src" -I"./base_antlr"
BIN="exe"

DEBUG=-g
SRC=$(wildcard *.cpp) $(wildcard src/*.cpp) $(wildcard base_antlr/*.cpp)
OBJ=$(SRC:%.cpp=%.o)

all: $(OBJ)
	$(CXX) -o $(BIN) $(FLAGS) $^ $(LIB)

.PHONY: clean grammar

clean:
	rm -f ./src/*.o
	rm -f ./base_antlr/*.o
	rm -f *.o
	rm ./.antlr/*.class
	rm $(BIN)

softclean:
	rm -f ./src/*.o
	rm $(BIN)
	

grammar:
	./base_antlr/.antlr4.sh -visitor -listener -Dlanguage=Cpp cmmp.g4


