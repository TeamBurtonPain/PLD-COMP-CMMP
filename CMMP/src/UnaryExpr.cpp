#include "UnaryExpr.h"

UnaryExpr::UnaryExpr(Type t, Expression *e1, UnaryOp ope) : Expression(t), expression(e1), op(ope)
{
}

UnaryExpr::~UnaryExpr(void)
{
    if (expression)
        delete expression;
}

vector<FunctionCall *> UnaryExpr::findFunctionCalls(void)
{
    return expression->findFunctionCalls();
}

vector<VariableCall *> UnaryExpr::findVarCalls(void)
{
    return expression->findVarCalls();
}

errorReturns UnaryExpr::setTypeAuto(void)
{
    errorReturns errors = expression->setTypeAuto();
    type = expression->getType();
    return errors;
}

//TODO
string UnaryExpr::buildIR(CFG *cfg)
{
    string left = getExpression()->buildIR(cfg);

    string var = cfg->create_new_tempvar(getExpression()->getType());
    IRInstr::Operation operatorIR;
    switch (op)
    {
    case UnaryOp::NOT:
        //TODO
        //operatorIR = IRInstr::Operation::not;
        break;
    case UnaryOp::MINUS:
        //TODO
        //operatorIR = IRInstr::Operation::sub;
        break;
    }
    cfg->current_bb->add_IRInstr(operatorIR, getExpression()->getType(), {var, left});
    return var;
}