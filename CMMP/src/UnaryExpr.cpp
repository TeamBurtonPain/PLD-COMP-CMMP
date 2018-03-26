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

uint UnaryExpr::setTypeAuto(void)
{
    uint errors = expression->setTypeAuto();
    type = expression->getType();
    return errors;
}