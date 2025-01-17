#include <iostream>

/*
是一个数值集合，是给一个值命名的一种方式，
当你想用整数来表示某些状态或者某些数值时，它非常有用。
*/ 

// enum Example
// {
//     A,B=7,C
// };

// 还可以给enum指定类型, 默认是32位整型，必须是整型
enum Example2:char
{
    A,B=7,C
};

int a = 0;
int b = 1;
int c = 2;


// int main()
// {
//     // Example value = B;
//     // if (value == 1){

//     // }
//     std::cin.get();
// }
