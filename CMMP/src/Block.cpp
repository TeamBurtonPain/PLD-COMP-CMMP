#include "Block.h"

Block::Block(void) {}

Block::~Block(void)
{
    for (deque<Instruction *>::const_iterator it = instructions.begin(); it != instructions.end(); ++it)
    {
        delete *it;
    }
    instructions.clear();

    hashmap<string, VariableDeclaration *>::iterator it = variables.begin();
    while (it != variables.end())
    {
        delete (it->second);
        it++;
    }
    variables.clear();
}

void Block::addVariable(VariableDeclaration *v)
{
    variables.insert({v->getName(), v});
}
void Block::addInstruction(Instruction *i)
{
    instructions.push_back(i);
}