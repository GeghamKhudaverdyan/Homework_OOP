#ifndef __CAR__
#define __CAR__

#include <string>
#include"vehicle.hpp"

class Car : public Vehicle {
public:
	Car(double& weight, double& maxSpeed, std::string& fuelType);
	
private:
	std::string m_fuelType;
};

#endif //__CAR__
