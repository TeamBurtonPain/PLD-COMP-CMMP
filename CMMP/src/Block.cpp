#include "Block.h"

Block::Block(void) {}

Block::~Block(void) {}

void Block::addVariable(VariableDeclaration& v){
    variables.insert({v.getName(), ptr<VariableDeclaration>(&v)});
}
void Block::addInstruction(Instruction &i){
    instructions.push_back(ptr<Instruction>(&i));
}