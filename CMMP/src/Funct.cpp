#include "Funct.h"

Funct::Funct(Type t, string n):returnType(t), name(n){}

Funct::~Funct(void){}

void Funct::addVariable(Variable& v){
    parameters.insert({v.getName(), ptr<Variable>(&v)});
}

void Funct::setBlock(Block& b){
    instructions = ptr<Block>(&b);
}