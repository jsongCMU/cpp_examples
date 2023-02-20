#include <iostream>

int main(int argc, char * argv[]) {
  std::cout << "Pointer\n";
  int int_var = 0;
  int *int_ptr = &int_var;
  std::cout << "Int size           = " << sizeof(int) << "\n";
  std::cout << "Ptr value          = " << int_ptr << "\n";
  std::cout << "Ptr value + 1      = " << (int_ptr+1) << "\n";
  void *void_ptr = &int_var;
  std::cout << "Void ptr value     = " << void_ptr << "\n";
  std::cout << "Void ptr value + 1 = " << (void_ptr+1) << "\n";
  std::cout << "\n";

  std::cout << "Double pointer\n";
  int **int_ptr_ptr = &int_ptr;
  std::cout << "Int size          = " << sizeof(int) << "\n";
  std::cout << "Int ptr size      = " << sizeof(int*) << "\n";
  std::cout << "Int ptr ptr size  = " << sizeof(int**) << "\n";
  std::cout << "Void ptr size     = " << sizeof(void*) << "\n";
  std::cout << "Ptr ptr value     = " << int_ptr_ptr << "\n";
  std::cout << "Ptr ptr value + 1 = " << (int_ptr_ptr+1) << "\n";
  std::cout << "Ptr ptr deref     = " << *int_ptr_ptr << "\n";
  std::cout << "Ptr val           = " << int_ptr << "\n";
  std::cout << "\n";

  std::cout << "1D Array\n";
  int int_array[4];
  std::cout << "Array addr                    = " << int_array << "\n";
  std::cout << "Array addr + 1                = " << int_array+1 << "\n";
  std::cout << "Array[0] addr                 = " << &int_array[0] << "\n";
  std::cout << "Array[1] addr                 = " << &int_array[1] << "\n";
  std::cout << "Array[1] addr - Array[0] addr = " << (&int_array[1]-&int_array[0]) << "\n";
  std::cout << "\n";

  const int num_rows = 5;
  const int num_cols = 8;
  std::cout << "2D Array, " << num_rows << " x " << num_cols << "\n";
  int int_array_2d[num_rows][num_cols];
  for(int i = 0; i < num_rows; i++){
    for(int j = 0; j < num_cols; j++){
      int_array_2d[i][j] = 2*(i*num_cols+j);
    }
  }
  std::cout << "2D Array addr            = " << int_array_2d << "\n";
  std::cout << "2D Array addr + 1        = " << int_array_2d+1 << "\n";
  std::cout << "2D Array[0]    addr      = " << &int_array_2d[0] << "\n";
  std::cout << "2D Array[1]    addr      = " << &int_array_2d[1] << "\n";
  std::cout << "2D Array[0][0] addr      = " << &int_array_2d[0][0] << "\n";
  std::cout << "2D Array[0][1] addr      = " << &int_array_2d[0][1] << "\n";
  std::cout << "2D Array[1][0] addr      = " << &int_array_2d[1][0] << "\n";
  std::cout << "2D Array[1][1] addr      = " << &int_array_2d[1][1] << "\n";
  std::cout << "\n";
  // int_ptr_ptr = int_array_2d; // ERROR: a value of type "int (*)[num_cols]" cannot be assigned to an entity of type "int **"
}

