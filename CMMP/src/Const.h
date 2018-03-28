#pragma once

#include "CommonTypes.h"
#include "Type.h"
#include "Expression.h"

template <class T>
class Const : public Expression
{
public:
	Const(const Type t, const T &v);
	virtual ~Const(void);
	virtual string buildIR(CFG* cfg);

protected:
	T value;
};

template <class T>
Const<T>::Const(const Type t, const T &v) : Expression(t), value(v) {}

template <class T>
Const<T>::~Const(void) {}

template <>
string Const<int32_t>::buildIR(CFG* cfg)
{ 
	string var = cfg->create_new_tempvar(Type::INT32);
	vector<string> vect;
	vect.push_back(var);
	stringstream ss;
	ss << value;
	vect.push_back(ss.str());
	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT32, vect);
	return var;
}

template <>
string Const<int64_t>::buildIR(CFG* cfg)
{
	string var = cfg->create_new_tempvar(Type::INT64);
	vector<string> vect;
	vect.push_back(var);
	stringstream ss;
	ss << value;
	vect.push_back(ss.str());
	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::INT64, vect);
	return var;
}

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

template<class T>
string Const<T>::buildIR(CFG* cfg)
{
	string var = cfg->create_new_tempvar(Type::UNKNOWN);
	vector<string> vect;
	vect.push_back(var);
	stringstream ss;
	ss << value;
	vect.push_back(ss.str());
	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::UNKNOWN, vect);
	return var;
}

