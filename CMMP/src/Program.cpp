#include "Program.h"

Program::Program(void){}

Program::~Program(void){}

void Program::addVariable(ptr<VariableDeclaration> v){
    variables.insert({v->getName(), v});
}

void Program::setMainFunction(ptr<Funct> mainF){
    mainFunction = mainF;
}
void Program::addFunction(ptr<Funct> f){
    otherFunctions.insert({f->getName(), f});
}