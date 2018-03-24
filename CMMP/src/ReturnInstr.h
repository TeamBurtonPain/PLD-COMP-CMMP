#pragma once

#include "Instruction.h"
#include "Expression.h"

class ReturnInstr : public Instruction
{
  public:
    ReturnInstr(Expression *);
    virtual ~ReturnInstr(void);

    Expression *getExpression(void) { return expr; };
	  virtual vector<ReturnInstr *> findReturns(void);

  protected:
    Expression *expr;
};