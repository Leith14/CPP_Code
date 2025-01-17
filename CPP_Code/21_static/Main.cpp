#include <iostream>

// extern在外部翻译单元中寻找s_Variable
extern int s_Variable;

void Function()
{
    
}

int main()
{
    std::cout<<s_Variable<<std::endl;
    std::cin.get();
}