#include "square.hpp"
#include "shape.hpp"

Square::Square(const int& surface) : Shape(surface) {}

void Square::draw() {
	std::cout << "Drowing a SQUARE." << std::endl;
}
