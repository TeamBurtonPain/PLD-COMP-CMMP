#include "Const.h"

template <>
string Const<int32_t>::buildIR(CFG* cfg)
{ 
	string var = cfg->create_new_tempvar(Type::INT32);
	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT32, {var, to_string(value)});
	return var;
}

template <>
string Const<int64_t>::buildIR(CFG* cfg)
{
	string var = cfg->create_new_tempvar(Type::INT64);
	stringstream ss;
	ss << value;
	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, {var, ss.str()});
	return var;
}

template <>
string Const<char>::buildIR(CFG* cfg)
{
	string var = cfg->create_new_tempvar(Type::CHAR);
	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::CHAR, {var, string(1, value)});
	return var;
}
