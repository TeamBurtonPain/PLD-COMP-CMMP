#include "Condition.h"

Condition::Condition(const Expression &condition, const Instruction &ifInstruction, const Instruction &elseInstruction):
    test(&condition),
    instruction(&ifInstruction), 
    elseInstruction(&elseInstruction) 
{}

Condition::~Condition(void) {}