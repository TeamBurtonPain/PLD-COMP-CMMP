#pragma once

#include <vector>
#include "CommonTypes.h"
#include "VariableDeclaration.h"

class VariableDeclarations : public Instruction{
    public:
        VariableDeclarations(void);
        virtual ~VariableDeclarations(void);
        void addDecla(VariableDeclaration*);
        vector<VariableDeclaration*> getDecla(void){return declarations;};
    protected:
        vector<VariableDeclaration*> declarations;
};