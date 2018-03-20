#pragma once

#include "CommonTypes.h"
#include "VarContainer.h"

class Instruction
{
	public:
		Instruction(void);
		virtual ~Instruction(void) = 0;
		void setParent(VarContainer&);
		ptr<VarContainer> getParent(void);
	protected:
		ptr<VarContainer> parent;
};