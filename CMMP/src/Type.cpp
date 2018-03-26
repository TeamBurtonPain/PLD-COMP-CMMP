#include "Type.h"

#include <iostream>
Type TypeUtil::getTypeFromString(string s)
{
    if (!s.compare("char"))
    {
        return Type::CHAR;
    }
    else if (!s.compare("int32_t"))
    {
        return Type::INT32;
    }
    else if (!s.compare("int64_t"))
    {
        return Type::INT64;
    }
    else if (!s.compare("void"))
    {
        return Type::VOID;
    }
    else
    {
        return Type::UNKNOWN;
    }
}
string TypeUtil::toString(Type t){
    switch(t){
        case Type::CHAR:
            return "char";
        case Type::INT32:
            return "int32";
        case Type::INT64:
            return "int64";
        case Type::VOID:
            return "void";
        default:
            return "Unknown";

    }
}

Type TypeUtil::resultType(Type t1, Type t2)
{
    if (t1 == t2)
        return t1;
    else if (
        (t1 == Type::INT32 && t2 == Type::INT64) ||
        (t1 == Type::INT64 && t2 == Type::INT32))
    {
        return Type::INT64;
    }

    cout<<"Imcompa operation : "<< TypeUtil::toString(t1)<<" and "<<TypeUtil::toString(t2)<<endl;
    return Type::UNKNOWN;
}

bool TypeUtil::t1Tot2(Type t1, Type t2)
{
    if (
        t1 == t2 ||
        (t1 == Type::INT32 && t2 == Type::INT64))
    {
        return true;
    }
    else{
        cout<<"Imcompa : "<< TypeUtil::toString(t1)<<" to "<<TypeUtil::toString(t2)<<endl;
        return false;
    }
}