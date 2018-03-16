#pragma once

#include "Type.h"
#include "Expression.h"

class Const : public Expression{
	public :
		Const(Type t);
		virtual ~Const(void);
	protected :
		void *value;
};