CXX=g++
CXXFLAGS=$(FLAGS) $(INCLUDES)
FLAGS=$(DEBUG) $(OPTI) -std=c++14 -Wall -Wextra -pedantic
LIB="/lib/antlr/antlr_runtime/runtime/Cpp/run/usr/local/lib/libantlr4-runtime.a"
INCLUDES=-I"/lib/antlr/antlr_runtime/runtime/src" -I"./src" -I"./base_antlr" -I"." -I"../build_google/include"
BIN="exe"
BINTEST="./test/test"

DEBUG=-g
SRC=$(wildcard src/*.cpp) $(wildcard base_antlr/*.cpp) $(wildcard *.cpp) 
OBJ=$(SRC:%.cpp=%.o)

SRCTEST=$(wildcard test/*.cpp)
OBJTEST=$(filter-out main.o, $(OBJ)) $(SRCTEST:%.cpp=%.o)
LIBTEST=$(LIB) "../build_google/libgtest.a" "../build_google/libgtest_main.a" -pthread
FLAGSSTEST=$(FLAGS)

all: $(OBJ)
	$(CXX) -o $(BIN) $(FLAGS) $^ $(LIB)



test: $(OBJTEST)
	$(CXX) -o $(BINTEST) $(FLAGSTEST) $^ $(LIBTEST)


.PHONY: clean softclean vclean grammar

#everything
clean:
	rm -f ./src/*.o
	rm -f ./base_antlr/*.o
	rm -f *.o
	rm -f ../*.o
	rm ./base_antlr/.antlr/*.class
	rm $(BIN)
#clean structure
softclean:
	rm -f ./src/*.o
	rm $(BIN)
#clean visitor
vclean:
	rm -f ./BuildCMMP.o
	rm $(BIN)

cleantest:
	rm -f ./test/*.o

grammar:
	./base_antlr/.antlr4.sh -visitor -listener -Dlanguage=Cpp base_antlr/cmmp.g4


