/*
1. unique_ptr: 作用域指针。 不可复制，低开销
2. shared_ptr: 引用计数, 共享对象时使用
3. weak_ptr: 可以共享对象，但没有引用计数，会和原始对象一起销毁

*/
#include <iostream>
#include <string>
#include <memory>


class Entity
{


public:
    Entity()
    {
        std::cout<< "Created Entity!" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print(){}

};

int main()
{
    {
        std::weak_ptr<Entity> e0;
        {   
            // 创建方式1
            // std::unique_ptr<Entity> entity(new Entity());
            // entity->Print();

            // 创建方式2,推荐方式
            // std::unique_ptr<Entity> entity = std::make_unique<Entity>();
            // entity->Print();
            // 这个操作是被禁止的
            // std::unique_ptr<Entity> e0 = entity;

            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
            // std::weak_ptr<Entity> weakEntity = sharedEntity;
            e0 = sharedEntity;
      
        }
    }
    

    std::cin.get();
}