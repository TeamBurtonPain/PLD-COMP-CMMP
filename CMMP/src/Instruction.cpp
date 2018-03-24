#include "Instruction.h"

Instruction::Instruction(void) {}

Instruction::~Instruction(void) {
    //delete parent;
}

void Instruction::setParent(VarContainer* p){
    parent = p;
}

VarContainer* Instruction::getParent(void){
    return parent;
}