#ifndef	__CAR__
#define __CAR__

#include <iostream>
#include "engine.hpp"
#include "driver.hpp"

class Car {
public:

	Car(const std::string& model, const int& year, const std::string& name, const int& oil, Driver& driver);

	void aboutDriver() const;
	void aboutEngine() const;

private:
	std::string m_model;
	int m_year;
	Engine m_engine;
	Driver& m_driver;
};

#endif // __CAR__
