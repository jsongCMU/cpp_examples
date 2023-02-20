#include <iostream>

class MyClass {
  private:
    int i;
  public:
    MyClass(){
        i=0;
    };
    int get_i(){ // Returns copy!!!
        return i;
    };
    int& get_i_R(){ // Returns reference!!!
        return i;
    };
    void set_i(int val){
        i = val;
    };
};

int main(int argc, char * argv[]) {
  std::cout << "\nReferences example\n";
  std::cout << "Setup:\n";
  MyClass my_class;
  my_class.set_i(5);
  std::cout << "Value of i: " << my_class.get_i() << "\n";
  
  std::cout << "\n";
  std::cout << "Manipulating copy:\n";
  int val = 123;
  std::cout << "Value of val (initial):     " << val << "\n";
  val = my_class.get_i_R();
  std::cout << "Value of val (equals i):    " << val << "\n";
  val = 9;
  std::cout << "Value of val (changed val): " << val << "\n";
  std::cout << "Value of i:                 " << my_class.get_i() << "\n";
  
  std::cout << "\n";
  std::cout << "Manipulating reference:\n";
  int &valR = my_class.get_i_R();
  std::cout << "Value of valR (equals i):     " << valR << "\n";
  valR = 777;
  std::cout << "Value of valR (changed valR): " << valR << "\n";
  std::cout << "Value of i:                   " << my_class.get_i() << "\n";
  std::cout << "Value of i:                   " << my_class.get_i_R() << "\n";
  
}

