#include<iostream>
#include<iomanip>
#include<string>
#include<mutex>

class Logger {
    static int counter;
    static Logger* instance_;
    static std::mutex lock_;
    Logger() { }//counter++; }
public:
    static Logger* getLogger();

    void log(std::string str) {
        std::cout << "Logging string:" << str << std::endl;
    }
};