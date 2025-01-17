#include <iostream>
#include <string>

/*
纯虚函数就是接口
*/

class Printable
{
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
    virtual std::string GetName() { return "Entity"; }
    std::string GetClassName() {return "Entity";}
};

class Player : public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string &name)
        : m_Name(name) {}

    std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
    std::cout<< entity->GetName() << std::endl;
}


void Print(Printable* obj)
{
    std::cout << obj->GetClassName()<< std::endl;
}


int main()
{
    Entity *e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player *p = new Player("leixw");
    std::cout << p->GetName() << std::endl;

    Entity *entity = p;
    std::cout << entity->GetName() << std::endl;

    Print(e);
    Print(p);


    std::cin.get();
}