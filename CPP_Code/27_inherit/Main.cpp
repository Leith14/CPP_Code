#include <iostream>

class Entity
{
private:
    /* data */
public:

    float X,Y;

    void Move(float xa,float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player:public Entity
{
private:
    /* data */
public:
    const char* Name;

    void PrintName()
    {
        std::cout<<Name<<std::endl;
    }
};

int main()
{
    std::cout<<sizeof(Player)<<std::endl;
    Player player1;
    player1.Move(5,8);
    player1.X=2;
    std::cin.get();

}