#include "Variable.h"

Variable::Variable(Type t, string n, uint l, uint c) : Expression(t), name(n), line(l), column(c) {}

Variable::~Variable(void) {}
