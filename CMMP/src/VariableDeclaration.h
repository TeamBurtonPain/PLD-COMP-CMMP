#pragma once

#include "Expression.h"

class VariableDeclaration : public Instruction{
    public: 
      VariableDeclaration(Type t, string name, uint line, uint col, Expression& value);
      VariableDeclaration(Type t, string name, uint line, uint col);
      virtual ~VariableDeclaration(void);

      string getName(void) const{return name;};
		  Type getType(void){return type;};
      uint getLine(void){return line;};
      uint getColumn(void){return column;};
    protected:
		  Type type;
      string name;
      uint line;
      uint column;
      ptr<Expression> value;
};