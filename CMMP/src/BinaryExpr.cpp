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

uint BinaryExpr::setTypeAuto(void)
{
    uint errors = 0;
    {
        errors += expr1->setTypeAuto();
    }
    {
        errors += expr2->setTypeAuto();
    }
    type = TypeUtil::resultType(expr1->getType(), expr2->getType());
    if (type == Type::UNKNOWN)
        errors++;
        
    if (errors)
        cout << "Error Binary Affectation" << endl;
    return errors;
}

//TODO
  string BinaryExpr::buildIR(CFG *cfg){
      return "";
  }