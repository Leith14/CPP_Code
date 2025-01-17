#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
    int m_Age;

public:
    Entity(const std::string &name)
        : m_Name(name), m_Age(-1) {}
    explicit Entity(int age)
        : m_Name("Unknow"), m_Age(age){}
};

void PrintEntity(const Entity& entity)
{
    //Printing

}

int main()
{   
    /*
    直接初始化 (Direct Initialization)：
    对象 a 和 b 是通过构造函数直接初始化的。
    编译器调用匹配的构造函数来直接创建对象。
    优势：直接初始化通常比赋值初始化效率更高，因为它避免了额外的临时对象创建。*/

    // 推荐还是这种用法
    // Entity a("leixw");
    // Entity b(22);

    /*
    拷贝初始化 (Copy Initialization)：
    对象 a 和 b 首先通过右侧的 Entity("leixw") 和 Entity(22) 创建临时对象。
    然后，通过拷贝构造函数或移动构造函数，将这些临时对象的内容赋值到 a 和 b。
    在现代 C++ 中（C++11 及之后），由于返回值优化 (RVO) 和移动语义，实际的拷贝构造可能会被优化掉，但语法层面仍被认为是拷贝初始化。
    潜在问题：如果拷贝构造函数被禁用或不可用，这种写法可能会导致编译错误。
    */
    // Entity a = Entity("leixw");
    // Entity b = Entity(22);

    //隐式转换或者叫隐式构造函数
    Entity a =std::string("leixw");
    // Entity b = 22;
    Entity b(22);
    

    // PrintEntity(22);
    PrintEntity(std::string("leixw"));
    PrintEntity(Entity("leixw"));


    std::cin.get();
}