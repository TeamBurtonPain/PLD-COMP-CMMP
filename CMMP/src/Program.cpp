#include "Program.h"

Program::Program(void){}

Program::~Program(void){
    hashmap<string, VariableDeclaration*>::iterator it = variables.begin();
    while(it != variables.end())
    {
        delete(it->second);
        it++;
    }
    variables.clear();

    hashmap<string, Funct*>::iterator it2 = otherFunctions.begin();
    while(it2 != otherFunctions.end())
    {
        delete(it2->second);
        it2++;
    }
    otherFunctions.clear();

    if(mainFunction) delete mainFunction;
}

void Program::addVariable(VariableDeclaration* v){
    variables.insert({v->getName(), v});
}

void Program::setMainFunction(Funct* mainF){
    mainFunction = mainF;
}
void Program::addFunction(Funct* f){
    otherFunctions.insert({f->getName(), f});
}