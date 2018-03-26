#include "VariableCall.h"

VariableCall::VariableCall(Type t, string n, uint l, uint c) : Variable(t, n, l, c) {}

VariableCall::~VariableCall(void) {}

vector<VariableCall *> VariableCall::findVarCalls(void)
{
    vector<VariableCall *> v;
    v.push_back(this);
    return v;
}