#pragma once

class Parent
{
public:
  Parent(void){}
  virtual ~Parent(void){}
  virtual Parent *getParent(void) = 0;
};