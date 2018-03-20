#include "Variable.h"

Variable::Variable(Type t, string n, uint l):Expression(t), name(n), line(l){}

Variable::~Variable(void){}
 