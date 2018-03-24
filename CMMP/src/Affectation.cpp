#include "Affectation.h"

Affectation::Affectation(Type t, Variable* v):Expression(t), leftValue(v){

}

Affectation::~Affectation(void){
    if(leftValue) delete(leftValue);
}