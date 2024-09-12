#include "robot.hpp"

void Robot::move(int x, int y) {
	std::cout << "Robot is walking to position (" << x << ", " << y << ")." << std::endl;
}

void Robot::stop() {
	std::cout << "Robot has stopped." << std::endl;
}
