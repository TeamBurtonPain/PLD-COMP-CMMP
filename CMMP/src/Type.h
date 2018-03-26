#pragma once

#include <string>
using namespace std;

enum class Type
{
	INT32,
	INT64,
	CHAR,
	VOID,
	UNKNOWN
};

namespace TypeUtil
{
Type getTypeFromString(string s);
Type resultType(Type, Type);
bool t1Tot2(Type t1, Type t2);
string toString(Type);
}