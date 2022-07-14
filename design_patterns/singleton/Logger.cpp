#include "Logger.h"
#include<iostream>
#include<iomanip>

Logger* Logger::instance_ = nullptr;
std::mutex Logger::lock_;
int Logger::counter = 0;

Logger* Logger::getLogger() {
        Logger::lock_.lock();
        if(!Logger::instance_) {
            counter++;
            std::cout << "counter:" << counter << std::endl;
            Logger::instance_ = new Logger();
        }
        Logger::lock_.unlock();
        return Logger::instance_;
}