#include "Bus.h"
#include "Car.h"
#include<string>

class VehicleFactory {
public:
    static Vehicle* createVehicle(std::string type) {
        if(type == "bus")
            return new Bus();
        else if(type == "car")
            return new Car();
        else
            return NULL;
    }
};