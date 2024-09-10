#include <iostream>
#include "iVehicle.hpp"
#include "car.hpp"
#include "bike.hpp"

int main() {

	Car car(20);
	std::cout << "Car is: " << car.startEngine() << std::endl;
	std::cout << "Petrol is: " << car.getPetrol() << " liters." << std::endl;
	std::cout << "Before refuel is: " << car.refuel(5) << " liter" << std::endl;
	std::cout << "Car is: " << car.stopEngine() << std::endl;

	std::cout << "Bike:------------------------" << std::endl;

	Bike bike(5);
	std::cout << "Bike is: " << bike.startEngine() << std::endl;
	std::cout << "Petrol is: " << bike.getPetrol() << " liters." << std::endl;
	std::cout << "Before refuel is: " << bike.refuel(5) << " liter" << std::endl;
	std::cout << "Bike is: " << bike.stopEngine() << std::endl;

	return 0;
}
