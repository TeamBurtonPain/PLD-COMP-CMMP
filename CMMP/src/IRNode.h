#pragma once
#include <string>
class CFG;

class IRNode{
    public:
        IRNode(){}
        virtual ~IRNode(){}
        virtual std::string buildIR(CFG * cfg) = 0;
};