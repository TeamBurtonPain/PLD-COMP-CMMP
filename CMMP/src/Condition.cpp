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

errorReturns Condition::setTypeAuto(void)
{
    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

    sumErrors(errors, test->setTypeAuto());
    sumErrors(errors, instruction->setTypeAuto());

    if (elseInstruction)
    {
        sumErrors(errors, elseInstruction->setTypeAuto());
    }

    return errors;
}

//TODO
string Condition::buildIR(CFG *cfg)
{
    string var_test = test->buildIR(cfg);


    BasicBlock *if_true = new BasicBlock(cfg, cfg->new_BB_name());
    BasicBlock *next = new BasicBlock(cfg, cfg->new_BB_name());

    next->exit_false = cfg->current_bb->exit_false;
    next->exit_true = cfg->current_bb->exit_true;

    cfg->current_bb->exit_true = if_true;
    cfg->current_bb->exit_false = next;
    if_true->exit_true = next;
    

    
    BasicBlock *if_false;
    //s'il existe une clause ELSE
    if(elseInstruction != nullptr){
        if_false = new BasicBlock(cfg, cfg->new_BB_name());
        cfg->current_bb->exit_false = if_false;
        if_false->exit_true = next;
        
        
    }
    cfg->add_bb(if_true);
    instruction->buildIR(cfg);

    if(elseInstruction != nullptr){
        cfg->add_bb(if_false);
        elseInstruction->buildIR(cfg);
    }
    
    cfg->add_bb(next);
    return "";
}