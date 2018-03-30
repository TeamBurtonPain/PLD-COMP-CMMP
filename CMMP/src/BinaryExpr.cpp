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
    }
    cfg->current_bb->add_IRInstr(operatorIR, getExpression1()->getType(), {var, left, right});
    return var;
}