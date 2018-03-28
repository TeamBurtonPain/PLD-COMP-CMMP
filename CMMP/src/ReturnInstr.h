#pragma once

#include "Instruction.h"
#include "Expression.h"
#include "FunctionCall.h"

class ReturnInstr : public Instruction
{
public:
  ReturnInstr(Expression *);
  virtual ~ReturnInstr(void);

  Expression *getExpression(void) { return expr; }
  virtual vector<FunctionCall *> findFunctionCalls(void);
  virtual vector<VariableCall *> findVarCalls(void);
  virtual vector<ReturnInstr *> findReturns(void);

  virtual string buildIR(CFG *cfg);

protected:
  Expression *expr = NULL;
};
