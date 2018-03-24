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