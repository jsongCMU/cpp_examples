#ifndef CLASS_H_
#define CLASS_H_

class MyClass {
  public:
    MyClass();
    MyClass(int initial_value);
    int get_i();
    void set_i(int val);
    int pub_var;
  
  private:
    int i;
};

#endif
