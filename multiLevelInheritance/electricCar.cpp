#include "electricCar.hpp"

ElectricCar::ElectricCar(const int& speed) : Car(speed) {}

void ElectricCar::move() {
	std::cout << "The electric car can go at a speed of " << getSpeed() << " kilometers per hour." << std::endl; 
}
