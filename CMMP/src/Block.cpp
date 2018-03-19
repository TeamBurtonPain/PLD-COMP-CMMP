#include "Block.h"

Block::Block(void) {}

Block::~Block(void) {}

void Block::addVariable(Variable& v){
    //variables.Add(v.getName(), &v);
}
void Block::addInstruction(Instruction &i){
    instructions.push_back(ptr<Instruction>(&i));
}