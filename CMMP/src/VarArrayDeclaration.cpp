#include "VarArrayDeclaration.h"

VarArrayDeclaration::VarArrayDeclaration(Type t, string n, uint l, uint c, Expression *size) : VariableDeclaration(t, n, l, c), size(size) {}
VarArrayDeclaration::~VarArrayDeclaration(void) {}

string VarArrayDeclaration::buildIR(CFG *cfg){
    if(dynamic_cast<Const<int64_t>*>(size) != nullptr){
        Const<int64_t> *c = dynamic_cast<Const<int64_t>*>(size);
        cfg->add_to_symbol_table(name, type, c->getValue());
    }
    else{
        cfg->add_to_symbol_table(name, type, 10);
    }
    return "";
}
