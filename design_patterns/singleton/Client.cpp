#include "Logger.h"
#include <thread>

void func1() {
    Logger* logger1 = Logger::getLogger();
    logger1->log("test string");
}

void func2() {
    Logger* logger2 = Logger::getLogger();
    logger2->log("another test string");
}

int main() {
    std::thread t1(func1);
    std::thread t2(func2);

    t1.join();
    t2.join();

    return 0;
}