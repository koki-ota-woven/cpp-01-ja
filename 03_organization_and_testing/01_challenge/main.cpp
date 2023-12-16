//
// Created by koki-ota on 23/12/16.
//

#include <iostream>
#include "temp_sensor.h"

int main() {
    std::cout << "Temperature reading: " << Sensor::readTemperature() << std::endl;
    return 0;
}