#include "Loop.h"

Loop::Loop(Expression &finalTest, Instruction &i):finalTest(&finalTest), instruction(&i) {}

Loop::~Loop(void) {}