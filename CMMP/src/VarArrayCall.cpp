#include "VarArrayCall.h"

VarArrayCall::VarArrayCall(Type t, string n, uint l, uint c, Expression *i):VariableCall(t,n,l,c),index(i){}
VarArrayCall::~VarArrayCall(void){}