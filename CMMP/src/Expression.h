#pragma once

#include "Type.h"

//classe abstraite  
class Expression{
	public :
		Expression(Type t);
		virtual ~Expression(void) = 0;
	protected :
		Type type;
};