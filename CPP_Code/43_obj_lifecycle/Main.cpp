/*
栈作用域生存期
1. 你必须了解栈上的东西是如何存在的，你才能写出不崩溃的代码
2. 一旦你知道了如何运作的，那就要利用好它，想出聪明的方法来做事情

栈变量和堆变量对在对象生存期上的区别

*/

#include <iostream>
#include <string>

class Entity
{
private:
    int x;

public:
    Entity()
    {
        std::cout<< "Created Entity!" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

};

int* CreatArray(int* array)
{
    // 这样写是错误的。超出{}的作用域，array就会被销毁了。
    //int array[50];

    // 使用new是可以的
    // int* array = new int[50];

    // 也可以传入数组，做填充
    return array;
}

class ScopedPtr
{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr)
        : m_Ptr(ptr)
    {
        
    }

    ~ScopedPtr()
    {
        delete m_Ptr;
    }

};


int main()
{
    int array[50];
    CreatArray(array);


    {
        // 这样是创建在栈上
        //Entity e; 
        // 创建在堆上
        ScopedPtr e = new Entity();
        // Entity* e = new Entity();
    }

    std::cin.get();
}
