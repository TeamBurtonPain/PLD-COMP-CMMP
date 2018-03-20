#pragma once
class Variable;

class VarContainer{
    public:
        virtual ~VarContainer(void){};
		virtual void addVariable(Variable&)=0;
};