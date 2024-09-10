#include "car.hpp"

Car::Car(const double& petrol) : m_petrol(petrol) {}

double Car::getPetrol() const {
	return m_petrol;
}

std::string Car::startEngine() {
	m_startStop = 1;
	return "START";
}

std::string Car::stopEngine() {
	m_startStop = 0;
	return "STOP";
}

double Car::refuel(const double& ref) {
	return m_petrol + ref;
}
