#include "car.hpp"

void Car::displayInfo() {
	if(_make == "" && _model == "" && _year == 0 && _mileage == 0) {
		std::cout << "You havn't car․ Save money and try again " << std::endl;
		return;
	}

	std::cout << std::endl;
	std::cout << "My car make is " << Car::getMake() << " and model is " << Car::getModel() << std::endl;
	std::cout << "produced in " << Car::getYear() << " and mileage is " << Car::getMileage() << " kilometors." << std::endl;
}

double Car::drive(double distance) {
	if(distance < 0) {
		std::cout << "Pleace input only positive numbers." << std::endl;
		return 0;
	} else if(distance > 10000) {
		std::cout << " Please drive your car enough or it will break down " << std::endl;
		return 0;
	}
	return _mileage += distance;
}

int Car::service() {
	_mileage = 0;
	return _mileage;
}
