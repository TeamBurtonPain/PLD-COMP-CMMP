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
	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, {var, to_string(value)});
	return var;
}

//TODO y a pas la fameuse conversion ici ??
template <>
string Const<char>::buildIR(CFG* cfg)
{
	string var = cfg->create_new_tempvar(Type::CHAR);
	vector<string> vect;
	vect.push_back(var);
	stringstream ss;
	ss << value;
	vect.push_back(ss.str());
	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::CHAR, vect);
	return var;
}
