#ifndef  __CIRCLE__
#define __CIRCLE__

#include "shape.hpp"
#define PI 3.1416

class Circle : public Shape {
public:
	Circle() = delete;
	Circle(const double& radiul);
	double area() override;
	~Circle() = default;
private:
	double m_radius;
};

#endif // __CIRCLE__
