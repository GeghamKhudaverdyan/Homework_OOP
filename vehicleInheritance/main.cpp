#include <iostream>
#include "car.hpp"
#include "vehicle.hpp"

int main() {
	double weight = 2000;
	double maxSpeed = 240;

	Vehicle vehicle(weight, maxSpeed);
	vehicle.displayInfo();
	
	Car car(weight, maxSpeed, "Petrol");
	car.displayInfo();
	
	//POLYMORPHIC BEHAVIOUR
	Vehicle* vehiclePtr = &car;
	vehiclePtr->displayInfo();
	return 0;
}
