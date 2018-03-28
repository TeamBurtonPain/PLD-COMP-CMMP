#pragma once

#include <vector>
#include "VariableDeclaration.h"

class VariableDeclarations : public Instruction
{
public:
  VariableDeclarations(void);
  virtual ~VariableDeclarations(void);
  void addDecla(VariableDeclaration *);
  vector<VariableDeclaration *> getDecla(void) { return declarations; }

  virtual vector<FunctionCall *> findFunctionCalls(void);
  virtual vector<VariableCall *> findVarCalls(void);

  virtual string buildIR(CFG *cfg) {return "";} //TODO : à modifier

protected:
  vector<VariableDeclaration *> declarations;
};