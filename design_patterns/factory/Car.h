#include<string>
#include<iostream>
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car() : Vehicle("blue") {}

    void driveVehicle() {
        std::cout << "Driving a car";
    }
};