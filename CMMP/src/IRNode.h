#pragma once
#include <string>
#include "IR.h"

class IRNode{
    public:
        IRNode(){}
        virtual ~IRNode(){}
        virtual std::string buildIR(CFG * cfg) = 0;
};