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
