#include "BinaryExpr.h"

BinaryExpr::BinaryExpr(Type t, Expression *expr1, BinaryOp op, Expression *expr2)
    : Expression(t), expr1(expr1), op(op), expr2(expr2)
{
}
BinaryExpr::~BinaryExpr(void)
{
    if (expr1)
        delete (expr1);
    if (expr2)
        delete (expr2);
}

vector<FunctionCall *> BinaryExpr::findFunctionCalls(void)
{
    vector<FunctionCall *> list;
    {
        vector<FunctionCall *> subList = expr1->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    {
        vector<FunctionCall *> subList = expr2->findFunctionCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    return list;
}

vector<VariableCall *> BinaryExpr::findVarCalls(void)
{
    vector<VariableCall *> list;
    {
        vector<VariableCall *> subList = expr1->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    {
        vector<VariableCall *> subList = expr2->findVarCalls();
        list.insert(list.end(), subList.begin(), subList.end());
    }
    return list;
}

errorReturns BinaryExpr::setTypeAuto(void)
{
    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

    sumErrors(errors, expr1->setTypeAuto());
    sumErrors(errors, expr2->setTypeAuto());
    type = TypeUtil::resultType(expr1->getType(), expr2->getType());
    if (type == Type::UNKNOWN)
        errors.errors++;

    return errors;
}

//TODO
string BinaryExpr::buildIR(CFG *cfg)
{
    string left = getExpression1()->buildIR(cfg);
    string right = getExpression2()->buildIR(cfg);

    string var = cfg->create_new_tempvar(getExpression1()->getType());
    IRInstr::Operation operatorIR;
    string tmp = left;//just in case
    switch (op)
    {
    case BinaryOp::ADD:
        operatorIR = IRInstr::Operation::add;
        break;
    case BinaryOp::SUB:
        operatorIR = IRInstr::Operation::sub;
        break;
    case BinaryOp::MULT:
        operatorIR = IRInstr::Operation::mul;
        break;
    case BinaryOp::DIV:
        operatorIR = IRInstr::Operation::div;
        break;
    case BinaryOp::MOD:
        operatorIR = IRInstr::Operation::mod;
        break;
    case BinaryOp::INF:
        operatorIR = IRInstr::Operation::cmp_lt;
        break;
    case BinaryOp::INFEQ:
        operatorIR = IRInstr::Operation::cmp_le;
        break;
    case BinaryOp::SUP:
        operatorIR = IRInstr::Operation::cmp_le;
        left = right;
        right = tmp;
        break;
    case BinaryOp::SUPEQ:
        operatorIR = IRInstr::Operation::cmp_lt;
        left = right;
        right = tmp;
        break;
    case BinaryOp::EQ:
        operatorIR = IRInstr::Operation::cmp_eq;    
        break;
    case BinaryOp::NEQ:
        //c'est un EQ, mais on l'inverse ensuite
        operatorIR = IRInstr::Operation::cmp_eq;
        break;
    }
    cfg->current_bb->add_IRInstr(operatorIR, getExpression1()->getType(), {var, left, right});

    // Si c'est un NEQ, on fait NO(EQ(left, right))
    if(op == BinaryOp::NEQ){
        string newvar = cfg->create_new_tempvar(getExpression1()->getType());
        cfg->current_bb->add_IRInstr(IRInstr::Operation::no, getExpression1()->getType(), {newvar, var});
        var = newvar;
    }
    return var;
}