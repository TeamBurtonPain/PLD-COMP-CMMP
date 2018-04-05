#include "VarArrayCall.h"

VarArrayCall::VarArrayCall(Type t, string n, uint l, uint c, Expression *i) : VariableCall(t, n, l, c), index(i) {}
VarArrayCall::~VarArrayCall(void) {}

string VarArrayCall::buildIR(CFG *cfg)
{
    string ind = index->buildIR(cfg);
    if (read)
    {
        return buildIRRead(cfg);
    }
    else
    {
        return buildIRWrite(cfg);
    }
}

string VarArrayCall::buildIRRead(CFG *cfg){
    string ind = index->buildIR(cfg);
    int offset = cfg->get_var_index(name); //todo codename
    string off = cfg->create_new_tempvar(Type::INT64);
    string res = cfg->create_new_tempvar(type);
    cfg->current_bb->add_IRInstr(IRInstr::Operation::mul, Type::INT64, {ind, "$"+to_string(8), ind});//TODO taille de types
    cfg->current_bb->add_IRInstr(IRInstr::Operation::sub, Type::INT64, {ind, "$"+to_string(offset), ind});
    cfg->current_bb->add_IRInstr(IRInstr::Operation::mov, Type::INT64, {off, ind});
    cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::INT64, {off, "%rbp", off});
    cfg->current_bb->add_IRInstr(IRInstr::Operation::rmem, type, {res, off});
    return res;
}

string VarArrayCall::buildIRWrite(CFG *cfg){
    string ind = index->buildIR(cfg);
    int offset = cfg->get_var_index(name); //todo codename
    string off = cfg->create_new_tempvar(Type::INT64);
    string res = cfg->create_new_tempvar(type);
    cfg->current_bb->add_IRInstr(IRInstr::Operation::mul, Type::INT64, {ind, "$"+to_string(8), ind});//TODO taille de types
    cfg->current_bb->add_IRInstr(IRInstr::Operation::sub, Type::INT64, {ind, "$"+to_string(offset), ind});
    return ind;
}