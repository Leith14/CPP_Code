#include <iostream>

/*
结构函数基本上就是一个特殊类型的方法，它在对象被销毁时被调用
相当于python中的 def __init__(self):
*/

// 如果在堆上分配了对象，手动分配了任务类型的内存，那你需要手动清理。

class Entity
{
public:
    float X, Y;
    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }

    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
        std::cout<<"Created Entity!"<<std::endl;
    }

    Entity(float x, float y){
        X = x;
        Y = y;
    }

    ~Entity()
    {
        std::cout<<"Destroyed Entity!"<<std::endl;
    }
};

class Log{
// 验证是否有隐藏构造函数
// private:
//     Log(){}
public:
    // Log() = delete;
    static void Write(){

    }
};

void Function()
{
    Entity e; //因为对象是在栈上被创建的。当超出作用域时，它会被自动销毁。
    e.Print();
}

int main()
{
    
    Function();
    std::cin.get();
}