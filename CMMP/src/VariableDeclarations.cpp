#include "VariableDeclarations.h"

VariableDeclarations::VariableDeclarations(void){}
VariableDeclarations::~VariableDeclarations(void){}
void VariableDeclarations::addDecla(VariableDeclaration& d){
    declarations.push_back(ptr<VariableDeclaration> (&d));
}