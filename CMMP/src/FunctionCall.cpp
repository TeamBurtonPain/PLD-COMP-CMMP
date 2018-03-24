#include "FunctionCall.h"

FunctionCall::FunctionCall(Type t, string n) : Expression(t), name(n) {}

FunctionCall::~FunctionCall(void)
{
    for (vector<Expression *>::const_iterator it = arguments.begin(); it != arguments.end(); ++it)
    {
        delete *it;
    }
    arguments.clear();

    if (function)
        delete function;
}

void FunctionCall::addArg(Expression *argument)
{
    arguments.push_back(argument);
}

vector<FunctionCall *> FunctionCall::findFunctionCalls(void)
{
    vector<FunctionCall *> list;

    for (vector<Expression *>::iterator it = arguments.begin(); it != arguments.end(); ++it)
    {
        vector<FunctionCall *> subList = (*it)->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    list.push_back(this);

    return list;
}

vector<VariableCall *> FunctionCall::findVarCalls(void)
{
    vector<VariableCall *> list;

    for (vector<Expression *>::iterator it = arguments.begin(); it != arguments.end(); ++it)
    {
        vector<VariableCall *> subList = (*it)->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
