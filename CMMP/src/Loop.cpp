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
    if (finalTest)
    {
        vector<FunctionCall *> subList = finalTest->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    if (instruction)
    {
        vector<FunctionCall *> subList = instruction->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

vector<VariableCall *> Loop::findVarCalls(void)
{
    vector<VariableCall *> list;
    if (finalTest)
    {
        vector<VariableCall *> subList = finalTest->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    if (instruction)
    {
        vector<VariableCall *> subList = instruction->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

vector<ReturnInstr *> Loop::findReturns(void)
{
    vector<ReturnInstr *> list;
    if (instruction)
    {
        vector<ReturnInstr *> subList = instruction->findReturns();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}
vector<VariableDeclaration *> Loop::findVarDeclarations(void)
{
    vector<VariableDeclaration *> list;
    if (instruction)
    {
        vector<VariableDeclaration *> subList = instruction->findVarDeclarations();
        list.insert(list.end(), subList.begin(), subList.end());
    }

    return list;
}

uint Loop::setTypeAuto(void)
{
    uint errors = 0;

    if (finalTest)
    {
        errors += finalTest->setTypeAuto();
    }
    if (instruction)
    {
        errors += instruction->setTypeAuto();
    }

    return errors;
}


//TODO
  string Loop::buildIR(CFG *cfg){
      return "";
  }