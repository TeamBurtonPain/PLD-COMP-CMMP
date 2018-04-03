#pragma once

#include "VariableCall.h"

class VarArrayCall : public VariableCall
{
  public:
    VarArrayCall(Type t, string n, uint l, uint c, uint index);
    virtual ~VarArrayCall(void);

    uint getIndex(void){return index;}

  protected:
    uint index;
};