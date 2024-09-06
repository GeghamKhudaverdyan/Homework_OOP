#ifndef __TRIANGLE__
#define __TRIANGLE__

#include <iostream>
#include "shape.hpp"

class Triangle : public Shape {
public:
	Triangle() = default;
	Triangle(const int& surface);
	void draw() override;
};

#endif // __TRIANGLE__
