#include <iostream>
#include <string>

/*
虚函数引入了一种叫做Dynamic Dispatch的东西，
它通常通过V表（虚函数表）来实现编译，它包含基类中所有虚函数的映射。
这样可以在运行时，将它们映射到正确的override函数
*/

// 缺点：需要额外内存来存储V表，这样我们就可以分配到正确的函数

class Entity
{
public:
    virtual std::string GetName() {return "Entity";}

};

class Player:public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string& name)
        : m_Name(name) {}

    std::string GetName() override {return m_Name;}
};

int main()
{
    Entity* e = new Entity();
    std::cout<< e->GetName() << std::endl;

    Player* p = new Player("leixw");
    std::cout<<p->GetName() << std::endl;

    Entity* entity = p;
    std::cout<<entity->GetName()<<std::endl;

    std::cin.get();
}