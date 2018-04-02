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

errorReturns Loop::setTypeAuto(void)
{
    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

    if (finalTest)
    {
        sumErrors(errors, finalTest->setTypeAuto());
    }
    if (instruction)
    {
        sumErrors(errors, instruction->setTypeAuto());
    }

    return errors;
}

//TODO
string Loop::buildIR(CFG *cfg)
{
    BasicBlock *bb_test = new BasicBlock(cfg, cfg->new_BB_name());
    BasicBlock *bb_loop = new BasicBlock(cfg, cfg->new_BB_name());
    BasicBlock *bb_next = new BasicBlock(cfg, cfg->new_BB_name());
    
    cfg->current_bb->exit_true = bb_test;

    bb_test->exit_false = bb_next;
    bb_test->exit_true = bb_loop;
    bb_loop->exit_true = bb_test;

    cfg->add_bb(bb_test);
    finalTest->buildIR(cfg);

    cfg->add_bb(bb_loop);
    instruction->buildIR(cfg);

    cfg->add_bb(bb_next);
    return "";
}