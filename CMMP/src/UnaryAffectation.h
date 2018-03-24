#pragma once

#include "Affectation.h"
#include "Variable.h"
#include "Operators.h"

class UnaryAffectation : public Affectation
{
  public:
    UnaryAffectation(Type t, Variable *leftValue, OpUnaryAffectation, bool isPre);
    virtual ~UnaryAffectation(void);

  protected:
    OpUnaryAffectation op;
    bool isPre;
};