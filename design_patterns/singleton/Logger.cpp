#include "Logger.h"
#include<iostream>
#include<iomanip>

Logger* Logger::instance_ = nullptr;
int Logger::counter = 0;

Logger* Logger::getLogger() {
        if(!Logger::instance_) {
            counter++;
            std::cout << "counter:" << counter << std::endl;
            Logger::instance_ = new Logger();
        }
        return Logger::instance_;
}