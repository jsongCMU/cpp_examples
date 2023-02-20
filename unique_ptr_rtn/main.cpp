#include <iostream>
#include <memory>

class Coord {
    public:
        float x;
        float y;
    public:
        Coord(float xin=0, float yin=0):x(xin),y(yin){
            std::cout<<"Coord ("<<x<<","<<y<<") made!\n";
        }
        ~Coord(){
            std::cout<<"Coord ("<<x<<","<<y<<") destroyed!\n";
        }
};

class CoordMaker{
    public:
        std::unique_ptr<Coord> allocate(float xin=0, float yin=0){
            std::cout<<"Start of allocate...\n";
            std::unique_ptr<Coord> to_rtn = std::make_unique<Coord>(xin,yin);
            std::cout<<"End of allocate...\n";
            return to_rtn;
        }
};

int main(int argc, char * argv[]) {
  CoordMaker my_coord_maker = CoordMaker();

  std::cout << "Test 1:\n";
  std::unique_ptr<Coord> my_ptr1 = my_coord_maker.allocate(1);

  std::cout << "\nTest 2:\n";
  {
    std::unique_ptr<Coord> my_ptr2 = my_coord_maker.allocate(2);
  }

  std::cout << "\nTest 3:\n";
  {
    std::unique_ptr<Coord> my_ptr3 = my_coord_maker.allocate(3);
    std::unique_ptr<Coord> my_ptr4 = my_coord_maker.allocate(4);
    // std::unique_ptr<Coord> my_ptr5 = my_ptr3; // Literally illegal
  }
  
  std::cout << "\nEnd of tests\n\n";
}

