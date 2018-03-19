#include "Const.h"

template <class T>
Const<T>::Const(const Type t, const T &v):Expression(t), value(&v){}

template <class T>
Const<T>::~Const(void){}