#include "VariableDeclaration.h"

VariableDeclaration::VariableDeclaration(Type t, string n, uint l, uint c)
    : type(t), name(n), line(l), column(c) {}
VariableDeclaration::~VariableDeclaration(void)
{
    if (value)
        delete value;
}