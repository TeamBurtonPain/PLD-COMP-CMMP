#include "Block.h"

Block::Block(void) {}

Block::~Block(void) {}

void Block::addVariable(ptr<VariableDeclaration> v){
    variables.insert({v->getName(), v});
}
void Block::addInstruction(ptr<Instruction> i){
    instructions.push_back(i);
}