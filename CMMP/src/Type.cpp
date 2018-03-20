#include "Type.h"


Type TypeUtil::getTypeFromString(string s){
    if(!s.compare("char")){         
        return Type::CHAR; 
    }else if(!s.compare("int32_t")){
        return Type::INT32;
    }else if(!s.compare("int64_t")){
        return Type::INT64;
    }else if(!s.compare("void")){
        return Type::VOID;
    }else{
        return Type::UNKNOWN;
    }
}