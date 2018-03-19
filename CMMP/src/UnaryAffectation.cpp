#include "UnaryAffectation.h"


UnaryAffectation::UnaryAffectation(Type t, Variable& leftValue, OpUnaryAffectation op, bool isPre)
    :Affectation(t, leftValue), op(op), isPre(isPre){
}
UnaryAffectation::~UnaryAffectation(void){

}