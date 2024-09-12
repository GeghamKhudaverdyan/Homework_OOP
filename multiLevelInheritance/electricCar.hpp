#ifndef  __ELECTRICCAR__
#define  __ELECTRICCAR__

#include "car.hpp"

class ElectricCar : public Car {
public:	
	ElectricCar() = default;
	ElectricCar(const int& speed);
	void move() override;
};

#endif // __ELECTRICCAR__
