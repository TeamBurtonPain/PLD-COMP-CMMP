CXX=g++
CXXFLAGS=$(FLAGS) -I$(INCLUDES)
FLAGS=$(DEBUG) $(OPTI) -std=c++14 -Wall -Wextra -pedantic
LIB="/lib/antlr/antlr_runtime/runtime/Cpp/run/usr/local/lib/libantlr4-runtime.a"
INCLUDES="/lib/antlr/antlr_runtime/runtime/Cpp/run/usr/local/include/antlr4-runtime"
BIN="exe"

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

all: $(OBJ)
	$(CXX) -o $(BIN) $(FLAGS)  $^ $(LIB)

.PHONY: clean grammar

clean:
	rm -f *.o
	rm $(BIN)

grammar:
	./.antlr4.sh -visitor -no-listener -Dlanguage=Cpp cmmp.g4


