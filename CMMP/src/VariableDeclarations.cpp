#include "VariableDeclarations.h"

VariableDeclarations::VariableDeclarations(void) {}
VariableDeclarations::~VariableDeclarations(void)
{
    /*
    for (vector<VariableDeclaration*>::const_iterator it = declarations.begin(); it != declarations.end(); ++it)
    {
        delete *it;
    }
    declarations.clear();
    */
}
void VariableDeclarations::addDecla(VariableDeclaration *d)
{
    declarations.push_back(d);
}
vector<FunctionCall *> VariableDeclarations::findFunctionCalls(void){
    vector<FunctionCall *> v;
    return v;
}
vector<VariableCall *> VariableDeclarations::findVarCalls(void){
    vector<VariableCall *> v;
    return v;
}
