#include "Instruction.h"

Instruction::Instruction(void) {}

Instruction::~Instruction(void) {}

void Instruction::setParent(VarContainer *p)
{
    parent = p;
}

VarContainer *Instruction::getParent(void)
{
    return parent;
}

vector<ReturnInstr *> Instruction::findReturns(void)
{
    vector<ReturnInstr *> i;
    return i;
}