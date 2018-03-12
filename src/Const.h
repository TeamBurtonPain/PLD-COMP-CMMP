#pragma once

#include "Type.h"

class Const : public Expression{
	public :
		Const(Type t);
		~Const(void);
	protected :
		Type type;
		*void value;
}