#ifndef  __CAR__
#define __CAR__

#include <iostream>
#include "vehicle.hpp"

class Car : public Vehicle {
public:
	Car() = default;
	Car(const int& speed);
	void move() override;
};

#endif // __CAR__
