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

int main(int argc, char * argv[]) {
    std::cout << "Test 1:\n";
    std::shared_ptr<Coord> my_ptr1 = std::make_shared<Coord>(1);

    std::cout << "\nTest 2:\n";
    {
        std::shared_ptr<Coord> my_ptr2 = my_ptr1;
        std::shared_ptr<Coord> my_ptr3 = std::make_shared<Coord>(3);
    }

    std::shared_ptr<Coord> my_ptr4;
    std::cout << "\nTest 3:\n";
    {
        my_ptr4 = std::make_shared<Coord>(4);
    }
  
    std::cout << "\nEnd of tests\n\n";
}

