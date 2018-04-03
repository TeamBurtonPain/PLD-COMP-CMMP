#include "Block.h"

Block::Block(void) : num(count++) {cout<<num<<endl;}

uint Block::count = 0;

Block::~Block(void)
{
    for (deque<Instruction *>::const_iterator it = instructions.begin(); it != instructions.end(); ++it)
    {
        delete *it;
    }
    instructions.clear();

    hashmap<string, VariableDeclaration *>::iterator it = variables.begin();
    while (it != variables.end())
    {
        delete (it->second);
        it++;
    }
    variables.clear();
}

void Block::addVariable(VariableDeclaration *v)
{
    variables.insert({v->getName(), v});
}
void Block::addInstruction(Instruction *i)
{
    instructions.push_back(i);
}

vector<FunctionCall *> Block::findFunctionCalls(void)
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

    for (deque<Instruction *>::iterator it = instructions.begin(); it != instructions.end(); ++it)
    {
        vector<FunctionCall *> subList = (*it)->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

vector<VariableCall *> Block::findVarCalls(void)
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

    for (deque<Instruction *>::iterator it = instructions.begin(); it != instructions.end(); ++it)
    {
        vector<VariableCall *> subList = (*it)->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
vector<VariableDeclaration *> Block::findVarDeclarations(void)
{
    vector<VariableDeclaration *> list;

    for (auto var : variables)
    {
        list.push_back(var.second);
    }

    for (deque<Instruction *>::iterator it = instructions.begin(); it != instructions.end(); ++it)
    {
        vector<VariableDeclaration *> subList = (*it)->findVarDeclarations();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

vector<ReturnInstr *> Block::findReturns(void)
{
    vector<ReturnInstr *> list;

    for (deque<Instruction *>::iterator it = instructions.begin(); it != instructions.end(); ++it)
    {
        vector<ReturnInstr *> subList = (*it)->findReturns();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

errorReturns Block::setTypeAuto(void)
{

    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

    for (auto var : variables)
    {
        sumErrors(errors, var.second->setTypeAuto());
    }

    for (deque<Instruction *>::iterator it = instructions.begin(); it != instructions.end(); ++it)
    {
        sumErrors(errors, (*it)->setTypeAuto());
    }

    return errors;
}

//TODO variables locales au bloc
string Block::buildIR(CFG *cfg)
{

    for (auto i : instructions)
    {
        i->buildIR(cfg);
    }
    return "";
}