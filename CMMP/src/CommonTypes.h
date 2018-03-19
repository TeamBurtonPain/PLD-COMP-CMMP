#pragma once

#include <unordered_map>
#include <memory>

using namespace std;
template<typename K, typename V>
using hashmap = unordered_map<K,V>;
template<typename T>
using ptr = shared_ptr<T>;
