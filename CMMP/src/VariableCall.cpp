#include "VariableCall.h"

VariableCall::VariableCall(Type t, string n, uint l, uint c) : Variable(t, n, l, c) {}

VariableCall::~VariableCall(void) {}

vector<VariableCall *> VariableCall::findVarCalls(void)
{
    vector<VariableCall *> v;
    v.push_back(this);
    return v;
}

//TODO
  string VariableCall::buildIR(CFG *cfg){
      if(read){
          return name;
      }
      else{
          //TODO : if tab ? offset ?
          return name;
      }
  }