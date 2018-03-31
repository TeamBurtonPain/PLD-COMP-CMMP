#pragma once

#include <unordered_map>
#include <memory>
#include <iostream>

using namespace std;
template <typename K, typename V>
using hashmap = unordered_map<K, V>;

class errorReturns
{
    public:
    errorReturns():errors(0), warnings(0){}
    uint errors;
    uint warnings;
    bool operator==(const errorReturns & e)const{
        return errors == e.errors && warnings == e.warnings;
    }
};
void sumErrors(errorReturns &e, errorReturns e2);
template <typename T>
using ptr = shared_ptr<T>;

#ifdef _WIN64
using uint = uint32_t;
#endif
