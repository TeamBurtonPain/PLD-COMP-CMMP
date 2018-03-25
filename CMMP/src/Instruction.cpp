#include "Instruction.h"

Instruction::Instruction(void) {}

Instruction::~Instruction(void) {}

void Instruction::setParent(Parent *p)
{
    parent = p;
}

Parent *Instruction::getParent(void)
{
    return parent;
}

vector<ReturnInstr *> Instruction::findReturns(void)
{
    vector<ReturnInstr *> i;
    return i;
}