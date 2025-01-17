
#include <iostream>

/*
如何创建一个类
*/

class Log
{

public:
    enum Level // 4字节的整数
    {
        LevelError = 0,
        LevelWarning,
        LevelInfo
    };
 

private:
    /* data */
    Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }

    void Error(const char *message)
    {
        if (m_LogLevel >= LevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }
    void Warn(const char *message)
    {
        if (m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }
    void Info(const char *message)
    {
        if (m_LogLevel >= LevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{

    Log log;
    log.SetLevel(log.LevelError);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    std::cin.get();
}