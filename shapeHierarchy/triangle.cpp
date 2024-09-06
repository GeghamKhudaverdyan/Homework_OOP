#include "shape.hpp"
#include "triangle.hpp"

Triangle::Triangle(const int& surface) : Shape(surface) {}

void Triangle::draw() {
	std::cout << "Drowing a TRIANGLE." << std::endl;
}
