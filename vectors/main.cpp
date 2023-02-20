#include <iostream>
#include <vector>

void print_vec(const std::vector<bool>& to_print)
{
    for(auto i = to_print.begin(); i != to_print.end(); i++)
    {
        std::cout << *i << ", ";
    }
}

int main(int argc, char * argv[]) {
  std::cout << "Vector of bools\n";
  std::vector<bool> vec;
  vec.push_back(false); vec.push_back(true); vec.push_back(false); vec.push_back(true);
  vec.push_back(false); vec.push_back(false); vec.push_back(true); vec.push_back(true);
  print_vec(vec);
  std::cout << "\n";

  std::cout << "Matrix of vector of bools\n";
  int width = 3;
  int height = 4;
  std::vector<bool> mat_vec[width][height];
  for(int i = 0; i < width; i++){
    for(int j = 0; j < height; j++){
        mat_vec[i][j].push_back((i+j)%2);
        mat_vec[i][j].push_back((i+j+1)%2);
        mat_vec[i][j].push_back((i+j)%2);
        mat_vec[i][j].push_back((i+j+1)%2);
        mat_vec[i][j].push_back((i+j)%2);
        mat_vec[i][j].push_back((i+j+1)%2);
    }
  }
  for(int i = 0; i < width; i++){
    for(int j = 0; j < height; j++){
        printf("(%d, %d): ", i, j);
        print_vec(mat_vec[i][j]);
        std::cout << "\n";
    }
    std::cout << "\n";
}
}

