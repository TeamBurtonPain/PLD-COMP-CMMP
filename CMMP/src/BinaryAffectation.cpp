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
        if (TypeUtil::t1Tot2(
                expr2->getType(),
                leftValue->getType()))
            errors.warnings++;
        else
            errors.errors++;

    type = leftValue->getType();

    return errors;
}

//TODO
string BinaryAffectation::buildIR(CFG *cfg)
{
    string right = getExpression()->buildIR(cfg);
    string left = leftValue->buildIR(cfg);
    cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, leftValue->getType(), {left, right});
    return right;
}