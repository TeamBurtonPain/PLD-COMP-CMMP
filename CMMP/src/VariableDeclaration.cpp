#include "VariableDeclaration.h"


VariableDeclaration::VariableDeclaration(Type t, string n, uint l, uint c):Variable(t,n,l,c){}
VariableDeclaration::VariableDeclaration(Type t, string n, uint l, uint c, Expression& v):Variable(t,n,l,c), value(&v){}
VariableDeclaration::~VariableDeclaration(void){}