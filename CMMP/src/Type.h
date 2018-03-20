#pragma once

#include <string>
using namespace std;

enum class Type {INT32, INT64, CHAR, VOID, UNKNOWN};

class TypeUtil{
	public :
		TypeUtil(void) {}
		virtual ~TypeUtil(void) {}
		static Type getTypeFromString(string s);
};