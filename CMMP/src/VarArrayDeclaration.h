#pragma once

#include "VariableDeclaration.h"

class VarArrayDeclaration : public VariableDeclaration
{
public:
  VarArrayDeclaration(Type t, string name, uint line, uint col, uint size);
  virtual ~VarArrayDeclaration(void);

  uint getSize(void) { return size; }

protected:
  uint size;
};