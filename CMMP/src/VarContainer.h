#pragma once
class VariableDeclaration;

class VarContainer{
    public:
        virtual ~VarContainer(void){};
		virtual void addVariable(VariableDeclaration*)=0;
};