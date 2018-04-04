#include "UnaryAffectation.h"

UnaryAffectation::UnaryAffectation(Type t, VariableCall *leftValue, OpUnaryAffectation op, bool isPre)
    : Affectation(t, leftValue), op(op), isPre(isPre)
{
}
UnaryAffectation::~UnaryAffectation(void)
{
}

string UnaryAffectation::buildIR(CFG *cfg)
{
    string prec_val = leftValue->buildIRRead(cfg);
    string new_val = cfg->create_new_tempvar(leftValue->getType());

    string mem = cfg->create_new_tempvar(leftValue->getType());

    if(!isPre){
        cfg->current_bb->add_IRInstr(IRInstr::Operation::mov, leftValue->getType(), {mem, prec_val});
    }
    if (op == OpUnaryAffectation::DECR)
    {
        cfg->current_bb->add_IRInstr(IRInstr::Operation::sub, leftValue->getType(), {new_val, prec_val, "$1"});
    }
    else if (op == OpUnaryAffectation::INCR)
    {
        cfg->current_bb->add_IRInstr(IRInstr::Operation::add, leftValue->getType(), {new_val, prec_val, "$1"});
    }

    if(dynamic_cast<VarArrayCall *>(leftValue) != nullptr){//ARRAY
        string left = leftValue->buildIRWrite(cfg);
        cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::INT64, {left, "%rbp", left});
        cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, type, {left, new_val});
    }
    else{
        int offset = cfg->get_var_index(leftValue->getName());//todo codename
        string off = cfg->create_new_tempvar(Type::INT64);
        cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, {off, to_string(offset)});
        cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::INT64, {off, "%rbp", off});
        cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, type, {off, new_val});
    }


    if (isPre)
    {
        return new_val;
    }
    else{
        return mem;
    }
}