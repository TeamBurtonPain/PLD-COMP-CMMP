#include "Loop.h"

Loop::Loop(const Expression &finalTest, const Instruction &i):finalTest(&finalTest), instruction(&i) {}

Loop::~Loop(void) {}