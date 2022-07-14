#include "VehicleFactory.h"
#include "Vehicle.h"
#include<iostream>

int main() {
    std::string type;
    std::cout << "Enter the type of vehicle to create";
    std::cin >> type;

    Vehicle* vehicle = VehicleFactory::createVehicle(type);
    if(vehicle)
        vehicle->driveVehicle();
    return 0;
}