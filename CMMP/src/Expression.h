#pragma once

#include "CommonTypes.h"
#include "Type.h"
#include "Instruction.h"

//classe abstraite  
class Expression : public Instruction{
	public:
		Expression(Type t);
		virtual ~Expression(void) = 0;
		Type getType(void){return type;};
		void setType(Type t){type=t;};
	protected:
		Type type;
};