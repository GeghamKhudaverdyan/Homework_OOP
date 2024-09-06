#ifndef __CIRCLE__
#define __CIRCLE__

#include <iostream>
#include "shape.hpp"

class Circle : public Shape {
public:
	
	Circle() = default;
	Circle(const int& surface);
	void draw() override;
};

#endif // __CIRCLE__
