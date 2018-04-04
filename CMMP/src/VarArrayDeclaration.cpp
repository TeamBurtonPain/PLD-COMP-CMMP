#include "VarArrayDeclaration.h"

VarArrayDeclaration::VarArrayDeclaration(Type t, string n, uint l, uint c, Expression *size) : VariableDeclaration(t, n, l, c), size(size) {}
VarArrayDeclaration::~VarArrayDeclaration(void) {}

string VarArrayDeclaration::buildIR(CFG *cfg){
    cfg->add_to_symbol_table(name, type);
    if(value != nullptr){
        string var = value->buildIR(cfg);
        //TODO ULTRA IMPORTANT
        int offset = cfg->get_var_index(name);
        string off = cfg->create_new_tempvar(Type::INT64);
        cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, {off, to_string(offset)});
        cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::INT64, {off, "%rbp", off});
        cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, type, {off, var});
        return name;//dunno if useful ?
    }
    return "";
}