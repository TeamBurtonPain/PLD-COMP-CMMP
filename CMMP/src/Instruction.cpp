#include "Instruction.h"

Instruction::Instruction(void) {}

Instruction::~Instruction(void) {}

void Instruction::setParent(VarContainer& p){
    parent = ptr<VarContainer>(&p);
}

ptr<VarContainer> Instruction::getParent(void){
    return parent;
}