#include<iostream>
#include<iomanip>
#include<string>

class Logger {
    static int counter;
    static Logger* instance_;
    Logger() { }//counter++; }
public:
    static Logger* getLogger();

    void log(std::string str) {
        std::cout << "Logging string:" << str << std::endl;
    }
};