#include "car.hpp"

Car::Car(double& weight, double& maxSpeed, const std::string& fuelType) : Vehicle(weight, maxSpeed), m_fuelType(fuelType) {}

void Car::displayInfo() const {
        std::cout << "Car Info:" << std::endl;
        std::cout << "Weight: " << m_weight << " kg" << std::endl;
        std::cout << "Max Speed: " << m_maxSpeed << " km/h" << std::endl;
        std::cout << "Fuel Type: " << m_fuelType << std::endl;
}
