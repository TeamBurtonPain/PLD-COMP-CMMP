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
    string prec_val = cfg->create_new_tempvar(leftValue->getType());

    if(!isPre){
        //copy leftValue in prec_val
        cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, leftValue->getType(), {prec_val, leftValue->getName()});
    }

    if (op == OpUnaryAffectation::DECR)
    {
        cfg->current_bb->add_IRInstr(IRInstr::Operation::sub, leftValue->getType(), {leftValue->getName(), leftValue->getName(), "$1"});
    }
    else if (op == OpUnaryAffectation::INCR)
    {
        cfg->current_bb->add_IRInstr(IRInstr::Operation::add, leftValue->getType(), {leftValue->getName(), leftValue->getName(), "$1"});
    }

    if (isPre)
    {
        return leftValue->getName();
    }
    else{
        return prec_val;
    }
}