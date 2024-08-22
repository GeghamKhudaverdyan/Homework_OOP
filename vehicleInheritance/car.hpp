#ifndef __CAR__
#define __CAR__

#include <iostream>
#include <string>
#include"vehicle.hpp"

class Car : public Vehicle {
public:
	Car(double& weight, double& maxSpeed, const std::string& fuelType);
	void displayInfo() const;
    
private:
	std::string m_fuelType;
};

#endif //__CAR__
