#ifndef  __RECTANGLE__
#define __RECTANGLE__

#include "shape.hpp"

class Rectangle : public Shape {
public:
	Rectangle() = delete;
	Rectangle(const double& length, const double& width);
	double area() override;
	~Rectangle() = default;

private:
	double m_length;
	double m_width;
};

#endif // __SHAPE__
