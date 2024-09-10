#include "circle.hpp"

Circle::Circle(const double& radius) : m_radius(radius) {}

double Circle::area() {
	return PI * m_radius * m_radius;
}
