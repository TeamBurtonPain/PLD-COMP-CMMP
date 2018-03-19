#pragma once

#include "Type.h"
#include "Instruction.h"

//classe abstraite  
class Expression : public Instruction{
	public :
		Expression(Type t);
		virtual ~Expression(void) = 0;
	protected :
		Type type;
};