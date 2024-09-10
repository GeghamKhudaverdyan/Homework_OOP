#include "bike.hpp"

Bike::Bike(const double& petrol) : m_petrol(petrol) {}

double Bike::getPetrol() const {
	return m_petrol;
}

std::string Bike::startEngine() {
	m_startStop = 1;
	return "START";
}

std::string Bike::stopEngine() {
	m_startStop = 0;
	return "STOP";
}

double Bike::refuel(const double& ref) {
	return m_petrol + ref;
}
