#include "Funct.h"

Funct::Funct(Type t, string n) : returnType(t), name(n) {}

Funct::~Funct(void)
{
    for (vector<VariableDeclaration *>::iterator it = parameters.begin(); it != parameters.end(); ++it)
    {
        delete (*it);
        it++;
    }
    for (vector<ReturnInstr *>::iterator it = returnExpr.begin(); it != returnExpr.end(); ++it)
    {
        delete (*it);
        it++;
    }
    parameters.clear();

    if (instructions)
        delete instructions;
}
hashmap<string, VariableDeclaration *> &Funct::getVariables(void)
{
    return paramInMap;
}

void Funct::addVariable(VariableDeclaration *v)
{
    parameters.push_back(v);
    paramInMap.insert({v->getName(), v});
}

void Funct::setBlock(Block *b)
{
    instructions = b;
}

vector<FunctionCall *> Funct::findFunctionCalls(void)
{
    vector<FunctionCall *> list;

    for (vector<VariableDeclaration *>::iterator it = parameters.begin(); it != parameters.end(); ++it)
    {
        if ((*it)->getExpression())
        {
            vector<FunctionCall *> subList = (*it)->getExpression()->findFunctionCalls();
            list.insert(list.end(), subList.begin(), subList.end());
        }
    }
    if (instructions)
    {
        vector<FunctionCall *> subList = instructions->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    for (vector<ReturnInstr *>::iterator it = returnExpr.begin(); it != returnExpr.end(); ++it)
    {
        if ((*it)->getExpression())
        {
            vector<FunctionCall *> subList = (*it)->getExpression()->findFunctionCalls();
            list.insert(list.end(), subList.begin(), subList.end());
        }
    }

    return list;
}

vector<VariableCall *> Funct::findVarCalls(void)
{
    vector<VariableCall *> list;

    for (vector<VariableDeclaration *>::iterator it = parameters.begin(); it != parameters.end(); ++it)
    {
        if ((*it)->getExpression())
        {
            vector<VariableCall *> subList = (*it)->getExpression()->findVarCalls();
            list.insert(list.end(), subList.begin(), subList.end());
        }
    }
    if (instructions)
    {
        vector<VariableCall *> subList = instructions->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    for (vector<ReturnInstr *>::iterator it = returnExpr.begin(); it != returnExpr.end(); ++it)
    {
        if ((*it)->getExpression())
        {
            vector<VariableCall *> subList = (*it)->getExpression()->findVarCalls();
            list.insert(list.end(), subList.begin(), subList.end());
        }
    }
    return list;
}
vector<VariableDeclaration *> Funct::findVarDeclarations(void)
{
    vector<VariableDeclaration *> list;

    for (vector<VariableDeclaration *>::iterator it = parameters.begin(); it != parameters.end(); ++it)
    {
        list.push_back(*it);
    }
    if (instructions)
    {
        vector<VariableDeclaration *> subList = instructions->findVarDeclarations();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    return list;
}
vector<ReturnInstr *> Funct::findReturns(void)
{
    vector<ReturnInstr *> list;
    if (instructions)
    {
        vector<ReturnInstr *> subList = instructions->findReturns();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
uint Funct::setTypeAuto(void)
{
    uint errors = 0;

    returnExpr = findReturns();

    if (instructions)
    {
        errors += instructions->setTypeAuto();
    }
    if (returnType != Type::VOID)
    {
        for (vector<ReturnInstr *>::iterator it = returnExpr.begin(); it != returnExpr.end(); ++it)
        {
            if ((*it)->getExpression())
            {
                errors += (*it)->getExpression()->setTypeAuto();
                errors += (TypeUtil::t1Tot2(
                              (*it)->getExpression()->getType(),
                              returnType))
                              ? 0
                              : 1;
            }
        }
    }
    if (errors)
        cout << "Error in function " << name << endl;

    return errors;
}

string Funct::BuildIR(CFG *cfg){
    if(instructions != nullptr){
        return instructions->BuildIR();
    }
    else{
        return "";
    }

}