#include "Program.h"

Program::Program(void){}

Program::~Program(void){}

void Program::addVariable(Variable& v){
    variables.insert({v.getName(), ptr<Variable>(&v)});
}

void Program::setMainFunction(Funct &mainF){
    mainFunction = ptr<Funct>(&mainF);
}
void Program::addFunction(Funct &f){
    otherFunctions.insert({f.getName(), ptr<Funct>(&f)});
}