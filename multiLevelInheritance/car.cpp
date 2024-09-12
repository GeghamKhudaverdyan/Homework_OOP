#include "car.hpp"

Car::Car(const int& speed) : Vehicle(speed) {}

void Car::move() {
	std::cout << "The car can go at a speed of " << getSpeed() << " kilometers per hour." << std::endl; 
}
