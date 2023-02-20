#include "class.h"

MyClass::MyClass(): i(0){};
MyClass::MyClass(int initial_value): i(initial_value){};

int MyClass::get_i()
{
  return i;
}

void MyClass::set_i(int val)
{
  i = val;
}
