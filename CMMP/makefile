CXX=g++
CXXFLAGS=$(FLAGS) $(INCLUDES)
FLAGS=$(DEBUG) $(OPTI) -std=c++17 -Wall -Wextra -pedantic 
LIB="/lib/antlr/antlr_runtime/runtime/Cpp/run/usr/local/lib/libantlr4-runtime.a" -lstdc++fs
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

CFRONT=$(wildcard test/*.c)
SFRONT=$(CFRONT:%.c=%.c.s)

all: $(OBJ)
	$(CXX) -o $(BIN) $(FLAGS) $^ $(LIB)



testFront: $(OBJTEST)
	$(CXX) -o $(BINTEST) $(FLAGSTEST) $^ $(LIBTEST)

testBack: $(SFRONT)


test/%.c.s: test/%.c
	./exe $<
	cp $@ test/testBack/Test$*/as.c.s
	as test/$*.c.s -o test/$*.c.o
	gcc test/$*.c.o
	mv a.out test/testBack/Test$*/a.out
	touch test/testBack/Test$*/run
	touch test/testBack/Test$*/std.out
	echo ./a.out > test/testBack/Test$*/run
	
	

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
	rm -f ./test/*.s
	

grammar:
	./base_antlr/.antlr4.sh -visitor -listener -Dlanguage=Cpp base_antlr/cmmp.g4


