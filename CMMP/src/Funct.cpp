#include "Funct.h"

Funct::Funct(Type t, string n) : returnType(t), name(n) {}

Funct::~Funct(void)
{
    for (vector<VariableDeclaration *>::iterator it = parameters.begin(); it != parameters.end(); ++it)
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
    hashmap<string, VariableDeclaration *> ret;
    for (vector<VariableDeclaration *>::iterator it = parameters.begin(); it != parameters.end(); ++it)
    {
        ret.insert({(*it)->getName(), *it}); 
    }
    return ret;
}

void Funct::addVariable(VariableDeclaration *v)
{
    parameters.push_back(v);
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
    if (returnExpr)
    {
        if (returnExpr->getExpression())
        {
            vector<FunctionCall *> subList = returnExpr->getExpression()->findFunctionCalls();
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

    if (returnExpr)
    {
        if (returnExpr->getExpression())
        {
            vector<VariableCall *> subList = returnExpr->getExpression()->findVarCalls();
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

    if (instructions)
    {
        errors += instructions->setTypeAuto();
    }
    if (returnExpr && returnType != Type::VOID)
    {
        if (returnExpr->getExpression())
        {
            errors += returnExpr->getExpression()->setTypeAuto();
            errors += (TypeUtil::t1Tot2(
                          returnExpr->getExpression()->getType(),
                          returnType))
                          ? 0
                          : 1;
        }
    }

    if (errors)
        cout << "Error in function " << name << endl;

    return errors;
}