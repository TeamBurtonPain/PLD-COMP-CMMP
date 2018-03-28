#pragma once
#include <string>
#include "IR.h"

class IRNode{
    public:
        IRNode(){}
        virtual ~IRNode(){}
        virtual string BuildIR(CFG * cfg) = 0;
};