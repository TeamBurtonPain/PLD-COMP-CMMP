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

