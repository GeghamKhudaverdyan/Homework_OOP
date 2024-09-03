#include "car.hpp"

Car::Car(const std::string& model, const int& year, const std::string& name, const int& oil, Driver& driver) :
		m_model(model), m_year(year), m_engine(name, oil), m_driver(driver) {}

void Car::aboutDriver() const {
	std::cout << "Driver name is: " << m_driver.getName() << std::endl;
	std::cout << "Her age is: " << m_driver.getAge() << std::endl;
	std::cout << "Her seniority is: " <<m_driver.getSeniority() << std::endl;
}

void Car::aboutEngine() const {
	std::cout << "Engine name is: " << m_engine.getName() << std::endl;
	std::cout << "Oil is " << m_engine.getOil() << "liter." << std::endl;
}

