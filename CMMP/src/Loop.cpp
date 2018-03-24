#include "Loop.h"

Loop::Loop(Expression *finalTest, Instruction *i) : finalTest(finalTest), instruction(i) {}

Loop::~Loop(void)
{
    if (finalTest)
        delete finalTest;
    if (instruction)
        delete instruction;
}