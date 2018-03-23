#include "Funct.h"

Funct::Funct(Type t, string n):returnType(t), name(n){}

Funct::~Funct(void){}

void Funct::addVariable(ptr<VariableDeclaration> v){
    parameters.insert({v->getName(), v});
}

void Funct::setBlock(ptr<Block> b){
    instructions = b;
}