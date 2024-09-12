#include "car.hpp"

void Car::move(int x, int y) {
	std::cout << "Car is moving to position (" << x << ", " << y << ")." << std::endl;
}

void Car::stop() {
	std::cout << "Car has stopped." << std::endl;
}
