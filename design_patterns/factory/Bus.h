#include<string>
#include<iostream>
#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus() : Vehicle("red") {}

    void driveVehicle() {
        std::cout << "Driving a bus";
    }
};