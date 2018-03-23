#include "VariableDeclarations.h"

VariableDeclarations::VariableDeclarations(void){}
VariableDeclarations::~VariableDeclarations(void){}
void VariableDeclarations::addDecla(ptr<VariableDeclaration> d){
    declarations.push_back(d);
}