#include "Instruction.h"
#include "Parent.h"
#include "ReturnInstr.h"

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

vector<VariableDeclaration *> Instruction::findVarDeclarations(void)
{
    vector<VariableDeclaration *> i;
    return i;
}
vector<ReturnInstr *> Instruction::findReturns(void)
{
    vector<ReturnInstr *> i;
    return i;
}