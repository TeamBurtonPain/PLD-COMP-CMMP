#include "Funct.h"

Funct::Funct(Type t, string n) : returnType(t), name(n) {}

Funct::~Funct(void)
{
    hashmap<string, VariableDeclaration *>::iterator it = parameters.begin();
    while (it != parameters.end())
    {
        delete (it->second);
        it++;
    }
    parameters.clear();

    if (instructions)
        delete instructions;
}

void Funct::addVariable(VariableDeclaration *v)
{
    parameters.insert({v->getName(), v});
}

void Funct::setBlock(Block *b)
{
    instructions = b;
}

vector<FunctionCall *> Funct::findFunctionCalls(void)
{
    vector<FunctionCall *> list;

    for (auto var : parameters)
    {
        if (var.second->getExpression())
        {
            vector<FunctionCall *> subList = var.second->getExpression()->findFunctionCalls();
            list.insert(list.end(), subList.begin(), subList.end());
        }
    }
    if(instructions)
    {
        vector<FunctionCall *> subList = instructions->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
