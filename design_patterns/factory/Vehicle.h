#ifndef __VEHICLE_H__
#define __VEHICLE_H__
#include<string>

class Vehicle {
    std::string color_;
public:
    Vehicle(std::string color) : color_(color) {}
    virtual void driveVehicle() = 0;
};
#endif