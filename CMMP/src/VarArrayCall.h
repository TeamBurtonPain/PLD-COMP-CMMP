#pragma once

#include "VariableCall.h"

class VarArrayCall : public VariableCall
{
public:
  VarArrayCall(Type t, string n, uint l, uint c, Expression *index);
  virtual ~VarArrayCall(void);

  Expression *getIndex(void) { return index; }
  virtual string buildIR(CFG *cfg) override;
  virtual string buildIRRead(CFG *cfg);
  virtual string buildIRWrite(CFG *cfg);

protected:
  Expression *index;
};