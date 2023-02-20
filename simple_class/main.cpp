#include <iostream>
#include "class.h"

void add_two_nums(int *res, int arg1, int arg2)
{
  *res = arg1 + arg2;
}

void add_two_nums_using_references(int &res, const int &arg1, const int &arg2)
{
  res = arg1 + arg2;
}

int main(int argc, char * argv[]) {
  // Classes
  std::cout << "Classes example\n";
  MyClass inst1;
  std::cout << "inst1 val: " << inst1.get_i() << "\n";
  inst1.set_i(12);
  std::cout << "inst1 val: " << inst1.get_i() << "\n";

  MyClass inst2(39);
  std::cout << "inst2 val: " << inst2.get_i() << "\n";
  inst2.pub_var = 10;
  std::cout << "inst2 pub var: " << inst2.pub_var << "\n";


  // References and pointers
  std::cout << "\n--------------------------------------\n";
  std::cout << "References examples\n";
  int res = 0;
  int arg1 = 3;
  int arg2 = 4;
  add_two_nums(&res, arg1, arg2);
  std::cout << "Result using pointers = " << res << "\n";

  int &res_ref = res;
  std::cout << "\nres and res_ref should always be the same!\n";
  std::cout << "Result  = " << res << "\n";
  std::cout << "Res ref = " << res_ref << "\n";
  res = 99;
  std::cout << "Result  = " << res << "\n";
  std::cout << "Res ref = " << res_ref << "\n";
  res_ref = -10;
  std::cout << "Result  = " << res << "\n";
  std::cout << "Res ref = " << res_ref << "\n";

  std::cout << "\nAdding using references\n";
  add_two_nums_using_references(res, arg1, arg2);
  std::cout << "Add two num using ref result = " << res << "\n";

  int &arg1_ref = arg1;
  int &arg2_ref = arg2;
  arg1_ref = 20;
  arg2_ref = 30;
  add_two_nums_using_references(res, arg1, arg2);
  std::cout << "Add two num using ref result = " << res << "\n";

  std::cout << "\n--------------------------------------\n";
  std::cout << "Pointers are still necessary :(\n";
  std::cout << "Look at code for explanation\n";
  // Have pointer; don't know what you want it to point to right away
  int *ptr;
  bool flag = true; // Imagine flag isn't hard coded, and comes from somewhere else
  if(flag)
  {
    ptr = &arg1;
  }
  else
  {
    ptr = &arg2;
  }
  // This will not work with references
  // ************************************* THIS WILL NOT WORK *******************************************
  // int &reference_failure; // Automatically deferenceing a uninitialized pointer, so will get seg fault; compiler won't let you do this
  // if(flag)
  // {
  //   reference_failure = arg1;
  // }
  // else
  // {
  //   reference_failure = arg2;
  // }
  // ****************************************************************************************************

}

