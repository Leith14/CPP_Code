#include <iostream>
#include <string>

/*
1. 如果要显式的控制对象的生存期，或者是对象太大了。
2. 如果不是1中的情况，就在栈上分配吧。

*/
using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("Unknow"){}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const {return m_Name;}
};


void Function()
{
    int a = 2;
    Entity entity = Entity("leixw");
}



int main()
{
    // 创建对象在栈上
    // Entity entity;
    // Entity* e;
    // {   
    //     Entity entity("leixw");
    //     e = &entity;
    //     std::cout<<entity.GetName()<<std::endl;
    // }
    
     Entity* e;
    {   
        //创建对象在堆上
        Entity* entity = new Entity("leixw");
        e = entity;
        std::cout<<e->GetName()<<std::endl;
        // std::cout<<(*e).GetName()<<std::endl;
    }

    
    std::cin.get();
    delete e;  
}