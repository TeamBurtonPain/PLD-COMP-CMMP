#include "Program.h"

Program::Program(void){}

Program::~Program(void){}

void Program::addVariable(VariableDeclaration& v){
    variables.insert({v.getName(), ptr<VariableDeclaration>(&v)});
}

void Program::setMainFunction(Funct &mainF){
    mainFunction = ptr<Funct>(&mainF);
}
void Program::addFunction(Funct &f){
    otherFunctions.insert({f.getName(), ptr<Funct>(&f)});
}