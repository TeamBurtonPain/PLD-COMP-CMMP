#pragma once

#include "VariableDeclaration.h"
#include "Const.h"

class VarArrayCall;

class VarArrayDeclaration : public VariableDeclaration
{
public:
  VarArrayDeclaration(Type t, string name, uint line, uint col, Expression *size);
  virtual ~VarArrayDeclaration(void);

  Expression *getSize(void) { return size; }
  string buildIR(CFG *cfg) override;
protected:
  Expression *size;
};

class VarArrayHeader
{
public:
  VarArrayHeader(string name, Expression *e) : name(name), offset(e) {}
  ~VarArrayHeader(void) {}
  string name;
  Expression *offset;
};