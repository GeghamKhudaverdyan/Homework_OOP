#include "circle.hpp"

Circle::Circle(const int& surface) : Shape(surface) {}

void Circle::draw() {
	std::cout << "Drawing a CIRCLE." << std::endl;
}
