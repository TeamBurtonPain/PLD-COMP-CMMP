#include "Loop.h"

Loop::Loop(Expression *finalTest, Instruction *i) : finalTest(finalTest), instruction(i) {}

Loop::~Loop(void)
{
    if (finalTest)
        delete finalTest;
    if (instruction)
        delete instruction;
}

vector<FunctionCall *> Loop::findFunctionCalls(void)
{
    vector<FunctionCall *> list;
    if(finalTest)
    {
        vector<FunctionCall *> subList = finalTest->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    if(instruction)
    {
        vector<FunctionCall *> subList = instruction->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}


vector<VariableCall *> Loop::findVarCalls(void)
{
    vector<VariableCall *> list;
    if(finalTest)
    {
        vector<VariableCall *> subList = finalTest->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    if(instruction)
    {
        vector<VariableCall *> subList = instruction->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
