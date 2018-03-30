#include "Program.h"

Program::Program(void) {}

Program::~Program(void)
{
    hashmap<string, VariableDeclaration *>::iterator it = variables.begin();
    while (it != variables.end())
    {
        delete (it->second);
        it++;
    }
    variables.clear();

    hashmap<string, Funct *>::iterator it2 = otherFunctions.begin();
    while (it2 != otherFunctions.end())
    {
        delete (it2->second);
        it2++;
    }
    otherFunctions.clear();

    if (mainFunction)
        delete mainFunction;
}

void Program::addVariable(VariableDeclaration *v)
{
    variables.insert({v->getName(), v});
}

void Program::setMainFunction(Funct *mainF)
{
    mainFunction = mainF;
}
void Program::addFunction(Funct *f)
{
    otherFunctions.insert({f->getName(), f});
}

vector<FunctionCall *> Program::findFunctionCalls(void)
{
    vector<FunctionCall *> list;

    for (auto var : variables)
    {
        if (var.second->getExpression())
        {
            vector<FunctionCall *> subList = var.second->getExpression()->findFunctionCalls();
            list.insert(list.end(), subList.begin(), subList.end());
        }
    }

    for (auto function : otherFunctions)
    {
        vector<FunctionCall *> subList = function.second->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    if (mainFunction)
    {
        vector<FunctionCall *> subList = mainFunction->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

vector<VariableCall *> Program::findVarCalls(void)
{
    vector<VariableCall *> list;

    for (auto var : variables)
    {
        if (var.second->getExpression())
        {
            vector<VariableCall *> subList = var.second->getExpression()->findVarCalls();
            list.insert(list.end(), subList.begin(), subList.end());
        }
    }

    for (auto function : otherFunctions)
    {
        vector<VariableCall *> subList = function.second->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    if (mainFunction)
    {
        vector<VariableCall *> subList = mainFunction->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

vector<VariableDeclaration *> Program::findVarDeclarations(void)
{
    vector<VariableDeclaration *> list;

    for (auto var : variables)
    {
        list.push_back(var.second);
    }

    for (auto function : otherFunctions)
    {
        vector<VariableDeclaration *> subList = function.second->findVarDeclarations();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    if (mainFunction)
    {
        vector<VariableDeclaration *> subList = mainFunction->findVarDeclarations();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

errorReturns Program::setTypeAuto(void)
{
    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

    for (auto var : variables)
    {

        sumErrors(errors, var.second->setTypeAuto());
    }

    for (auto function : otherFunctions)
    {
        sumErrors(errors, function.second->setTypeAuto());
    }

    if (mainFunction)
    {
        sumErrors(errors, mainFunction->setTypeAuto());
    }

    return errors;
}