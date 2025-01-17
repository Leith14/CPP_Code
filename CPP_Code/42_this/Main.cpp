#include <iostream>
#include <string>

void PrintEntity(const Entity& e);



class Entity
{
public:
    int x, y;
    Entity(int x, int y)
    {
        Entity* e = this;
        this->x = x; //推荐箭头这种写法
        (*this).y = y;

        Entity& e = *this;

        PrintEntity(*this);

        // delete this; 不要这样写

    }

    int GetX() const
    {
        const Entity* e = this;
        //e->x = 6; 前面加上const就不能修改类的成员变量了
        return x;
    }

};


void PrintEntity(Entity* e){

}


int main()
{
    std::cin.get();
}