#include <iostream>

/*
构造函数基本上就是一个特殊类型的方法，它在每次实例化对象时运行
相当于python中的 def __init__(self):
*/

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
    }

    Entity(float x, float y){
        X = x;
        Y = y;
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

int main()
{
    Log::Write();
    Log l;
    Entity e(10.0f,5.0f);
    // std::cout<<e.X<<std::endl;
    e.Print();
    std::cin.get();
}