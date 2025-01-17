#include <iostream>
#include <string>

/*

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


int main()
{
    int a = 2;
    int* b = new int[50];// 200 bytes,每个整数是4字节
    int* c = new int;// new返回指向你分配的内存指针
    // Entity* e = new Entity[50];
    Entity* e = new Entity(); // 分配内存，然后提供一个指向那个内存的指针，调用了Entity构造函数
    Entity* e = (Entity*)malloc(sizeof(Entity)); // 只分配内存，然后提供一个指向那个内存的指针，没有调用构造函数，一般不推荐这么写

    malloc(50); //手动挡祖师爷


    // 用new就必须用delete来释放内存
    delete e;
    delete[] b;
    std::cin.get();
}