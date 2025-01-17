#include <iostream>

struct Entity
{
    int x, y;

    void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int main()
{
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1 = {5, 8};
    e.Print();
    e1.Print();
    std::cin.get();
}