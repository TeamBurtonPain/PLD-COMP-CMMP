#include "Funct.h"

Funct::Funct(Type t, string n):returnType(t), name(n){}

Funct::~Funct(void){}

void Funct::addVariable(Variable& v){
    variables.insert({v.getName(), ptr<Variable>(&v)});
}
void Funct::addParameter(Variable& v){
    parameters.insert({v.getName(), ptr<Variable>(&v)});
}
void Funct::addInstruction(Instruction& i){
    instructions.push_back(ptr<Instruction>(&i));
} 