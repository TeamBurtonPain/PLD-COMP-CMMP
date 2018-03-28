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

uint FunctionCall::setTypeAuto(void)
{
    uint errors = 0;

    for (uint i = 0; i < arguments.size(); i++)
    {
        errors += arguments[i]->setTypeAuto();
        if (function)
        {
            Type t_expected = function->getVariablesInVector()[i]->getType();
            if (!TypeUtil::t1Tot2(arguments[i]->getType(), t_expected))
                errors++;
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
    //TODO
    //WUT ?
    //Methode de BB hein
    /*
    cfg->add_IRInstr(IRInstr::Operation::call, getType(), vect);
*/
    return var;
}