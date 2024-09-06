#include "shape.hpp"

Shape::Shape(const int& surface) : m_surface(surface) {}

void Shape::draw() {
	std::cout << "Drawing a SHAPE." << std::endl;
}

Shape::~Shape() {}
