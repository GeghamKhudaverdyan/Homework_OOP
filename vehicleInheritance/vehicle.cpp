#include <iostream>
#include "vehicle.hpp"

Vehicle::Vehicle(double& weight, double& maxSpeed) : m_weight(weight), m_maxSpeed(maxSpeed) {}

void Vehicle::displayInfo() const {
        std::cout << "Vehicle Info:" << std::endl ;
        std::cout << "Weight: " << m_weight << " kg" << std::endl;
        std::cout << "Max Speed: " << m_maxSpeed << " km/h" << std::endl;
    }
