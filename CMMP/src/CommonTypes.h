#pragma once

#include <unordered_map>
#include <memory>
#include <iostream>

using namespace std;
template <typename K, typename V>
using hashmap = unordered_map<K, V>;

template <typename T>
using ptr = shared_ptr<T>;

#ifdef _WIN64
using uint = uint32_t;
#endif
