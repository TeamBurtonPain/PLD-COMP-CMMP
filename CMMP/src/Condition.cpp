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
    if(elseInstruction)
    {
        vector<FunctionCall *> subList = elseInstruction->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
