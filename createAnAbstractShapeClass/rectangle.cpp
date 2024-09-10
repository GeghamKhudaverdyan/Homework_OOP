#include "rectangle.hpp"

Rectangle::Rectangle(const double& length, const double& width) : 
					m_length(length), m_width(width) {}

double Rectangle::area() {
	return m_length * m_width;
}
