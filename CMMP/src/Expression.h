#pragma once

#include "CommonTypes.h"
#include "Type.h"
#include "Instruction.h"
#include "VarContainer.h"

//classe abstraite  
class Expression : public Instruction{
	public :
		Expression(Type t);
		virtual ~Expression(void) = 0;
		Type getType(void){return type;};
		void setParent(VarContainer&);
		ptr<VarContainer> getParent(void);
	protected :
		Type type;
		ptr<VarContainer> parent;
};