#pragma once

#include "CommonTypes.h"
#include "Type.h"
#include "Expression.h"

template <class T>
class Const : public Expression{
	public :
		Const(const Type t, const T &v);
		virtual ~Const(void);
	protected :
		T value;
};