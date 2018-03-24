#include "VariableDeclarations.h"

VariableDeclarations::VariableDeclarations(void){}
VariableDeclarations::~VariableDeclarations(void){
    /*
    for (vector<VariableDeclaration*>::const_iterator it = declarations.begin(); it != declarations.end(); ++it)
    {
        delete *it;
    }
    declarations.clear();
    */
}
void VariableDeclarations::addDecla(VariableDeclaration* d){
    declarations.push_back(d);
}