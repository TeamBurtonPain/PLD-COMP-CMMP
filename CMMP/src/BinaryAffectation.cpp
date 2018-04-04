#include "BinaryAffectation.h"

BinaryAffectation::BinaryAffectation(Type t, VariableCall *leftValue, OpBinaryAffectation op, Expression *rightValue)
    : Affectation(t, leftValue), op(op), expr2(rightValue)
{
}
BinaryAffectation::~BinaryAffectation(void)
{
    if (expr2)
        delete (expr2);
}

vector<FunctionCall *> BinaryAffectation::findFunctionCalls(void)
{
    return expr2->findFunctionCalls();
}

vector<VariableCall *> BinaryAffectation::findVarCalls(void)
{
    vector<VariableCall *> v = expr2->findVarCalls();
    vector<VariableCall *> subList = leftValue->findVarCalls();
    v.insert(v.end(), subList.begin(), subList.end());
    return v;
}

errorReturns BinaryAffectation::setTypeAuto(void)
{
    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

    sumErrors(errors, expr2->setTypeAuto());

    if (!(expr2->getType() == leftValue->getType()))
    {
        if (TypeUtil::t1Tot2(
            expr2->getType(),
            leftValue->getType()))
        {
            errors.warnings++;
        }
        else
        {
            errors.errors++;
        }
    }

    type = leftValue->getType();

    return errors;
}

//TODO
string BinaryAffectation::buildIR(CFG *cfg)
{
    string right = getExpression()->buildIR(cfg);
    string left = leftValue->buildIR(cfg);

    if(op != OpBinaryAffectation::AFF){
        
        IRInstr::Operation ir_op;
        switch(op){
            case OpBinaryAffectation::ADDAFF:
            {
                ir_op = IRInstr::Operation::add;
                break;
            }
            case OpBinaryAffectation::SUBAFF :
            {
                ir_op = IRInstr::Operation::sub;
                break;
            }
            case OpBinaryAffectation::MULTAFF:
            {
                ir_op = IRInstr::Operation::mul;
                break;
            }
            case OpBinaryAffectation::DIVAFF:
            {
                ir_op = IRInstr::Operation::div;
                break;
            }
            case OpBinaryAffectation::MODAFF:
            {
                ir_op = IRInstr::Operation::mod;
                break;
            }
            default:{}
        }
        string var = cfg->create_new_tempvar(leftValue->getType());
        cfg->current_bb->add_IRInstr(ir_op, leftValue->getType(), {var, left, right});
        
        if(dynamic_cast<VarArrayCall *>(leftValue) != nullptr){//ARRAY
            cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::INT64, {left, "%rbp", left});
            cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, type, {left, var});
        }
        else{
            int offset = cfg->get_var_index(leftValue->getName());//todo codename
            string off = cfg->create_new_tempvar(Type::INT64);
            cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, {off, to_string(offset)});
            cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::INT64, {off, "%rbp", off});
            cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, type, {off, var});
        }

    }
    else{

        if(dynamic_cast<VarArrayCall *>(leftValue) != nullptr){//ARRAY
            cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::INT64, {left, "%rbp", left});
            cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, type, {left, right});
        }
        else{
            int offset = cfg->get_var_index(leftValue->getName());//todo codename
            string off = cfg->create_new_tempvar(Type::INT64);
            cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, {off, to_string(offset)});
            cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::INT64, {off, "%rbp", off});
            cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, type, {off, right});
        }
        

    }
    return left;
}