#include "Funct.h"

Funct::Funct(Type t, string n):returnType(t), name(n){}

Funct::~Funct(void){}

void Funct::addVariable(VariableDeclaration& v){
    parameters.insert({v.getName(), ptr<VariableDeclaration>(&v)});
}

void Funct::setBlock(Block& b){
    instructions = ptr<Block>(&b);
}