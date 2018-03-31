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

errorReturns FunctionCall::setTypeAuto(void)
{
    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

    for (uint i = 0; i < arguments.size(); i++)
    {
        sumErrors(errors, arguments[i]->setTypeAuto());
        if (function)
        {
            Type t_expected = function->getVariablesInVector()[i]->getType();

            if (arguments[i]->getType() != t_expected)
                if (TypeUtil::t1Tot2(arguments[i]->getType(), t_expected))
                    errors.warnings++;
                else
                    errors.errors++;
        }
        else //if there is no function declaration, this might mean it's a putchar or getchar...
        {
        }
    }

    return errors;
}

string FunctionCall::buildIR(CFG *cfg)
{
    vector<string> vect;
    vect.push_back(name);

    string var("");
    if (getType() == Type::INT32 || getType() == Type::INT64 || getType() == Type::CHAR)
    {
        var = cfg->create_new_tempvar(getType());
    }
    else
    {
        var = "";
    }
    vect.push_back(var);

    vector<Expression *> params = getArgs();
    for (vector<Expression *>::iterator it = params.begin(); it != params.end(); ++it)
    {
        vect.push_back((*it)->buildIR(cfg));
    }

    cfg->current_bb->add_IRInstr(IRInstr::Operation::call, getType(), vect);
    return var;
}