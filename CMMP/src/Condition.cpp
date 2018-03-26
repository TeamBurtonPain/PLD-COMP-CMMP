#include "Condition.h"

Condition::Condition(Expression *condition,
                     Instruction *ifInstruction,
                     Instruction *elseInstruction) : test(condition),
                                                     instruction(ifInstruction),
                                                     elseInstruction(elseInstruction)
{
}
Condition::Condition(Expression *condition,
                     Instruction *ifInstruction) : test(condition),
                                                   instruction(ifInstruction)
{
}

Condition::~Condition(void)
{
    if (test)
        delete test;
    if (instruction)
        delete instruction;
    if (elseInstruction)
        delete elseInstruction;
}

vector<FunctionCall *> Condition::findFunctionCalls(void)
{
    vector<FunctionCall *> list;

    {
        vector<FunctionCall *> subList = test->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    {
        vector<FunctionCall *> subList = instruction->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    if (elseInstruction)
    {
        vector<FunctionCall *> subList = elseInstruction->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

vector<VariableCall *> Condition::findVarCalls(void)
{
    vector<VariableCall *> list;

    {
        vector<VariableCall *> subList = test->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    {
        vector<VariableCall *> subList = instruction->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    if (elseInstruction)
    {
        vector<VariableCall *> subList = elseInstruction->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

vector<ReturnInstr *> Condition::findReturns(void)
{
    vector<ReturnInstr *> list;

    {
        vector<ReturnInstr *> subList = instruction->findReturns();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    if (elseInstruction)
    {
        vector<ReturnInstr *> subList = elseInstruction->findReturns();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

vector<VariableDeclaration *> Condition::findVarDeclarations(void)
{
    vector<VariableDeclaration *> list;

    {
        vector<VariableDeclaration *> subList = instruction->findVarDeclarations();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    if (elseInstruction)
    {
        vector<VariableDeclaration *> subList = elseInstruction->findVarDeclarations();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
