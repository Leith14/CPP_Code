#include <iostream>
/*
什么场景使用？
1. 想在程序全生命周期使用，但又不想让函数外部引用；
2. 

*/

// class Singleton
// {
// private:
//     static Singleton* s_Instance;
// public:
//     static Singleton& Get() {return *s_Instance;}
//     void Hello() {}
// };

// Singleton* Singleton::s_Instance = nullptr;


class Singleton
{

public:
    static Singleton& Get() 
    {
        static Singleton instance;  
        // 如果这里没有static 关键字， 这个实例会在栈上创建，当代码结束到这个括号外时，函数作用域结束时，就会被销毁
        return instance;
    }
    void Hello() {}
};


void Function()
{
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main()
{
    Singleton::Get().Hello();
    std::cin.get();
}