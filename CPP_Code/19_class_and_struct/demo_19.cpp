#include <iostream>

/*
class和struct的区别：class所有成员默认都是私有的，struct是公有的.
struct在C++存在的原因是希望与C保持向后兼容性；
有继承关系的时候用class
只是存储数据时用struct

*/

#define LOG(x) std::cout<<x<<std::endl;

struct Player
{   
    int x,y;
    int speed;

    void Move( int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }

};

int main(){

    Player player;
    player.Move(1,-1);

    std::cin.get();
}