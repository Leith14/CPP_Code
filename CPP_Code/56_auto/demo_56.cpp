// 让C++自动推导出数据类型
/*
如果我有auto，还需要写其他类型吗？能全用auto吗？

好处：类型太长考虑用auto。 当进去更加复杂的代码集，包含了模板等，你不得不使用auto了。

坏处：
想用name.size();或者序列化或者其他操作，不清除变量类型是很不好的。

*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

// 不好的情况
// char* GetName()
// {
//     return "leixw";
// }

// int main()
// {
//     // int a = 5;
//     // auto b = a;

//     // auto a = 5;
//     // auto a = 5L;
//     // auto a = 5.5f;
//     // auto a = "leixw";
//     std::string name = GetName();
//     auto a = name.size();

//     std::cout << a << std::endl;

//     std::cin.get();
// }

char*   GetName()
{
    return "leixw";
}

class Device {};

class DeviceManager
{
private:
    /* data */
    std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
    DeviceManager(/* args */);
    ~DeviceManager();

    const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const
    {
        return m_Devices;
    }
};

DeviceManager::DeviceManager(/* args */)
{
}

DeviceManager::~DeviceManager()
{
}


int main()
{
    std::vector<std::string> strings;
    strings.push_back("Apple");
    strings.push_back("Orange");

    // for (std::vector<std::string>::iterator it = strings.begin();
    //  it != strings.end(); it++)
    // {
    //     /* code */
    //     std::cout<<*it<<std::endl;
    // }

    for (auto it = strings.begin(); it != strings.end(); it++)
    {
        /* code */
        std::cout << *it << std::endl;
    }

    // using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
    // typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap;

    DeviceManager dm;
    // const DeviceMap&device = dm.GetDevices();
    // const std::unordered_map<std::string, std::vector<Device*>>&device = dm.GetDevices();
    const auto& devices = dm.GetDevices();

    std::cin.get();
}