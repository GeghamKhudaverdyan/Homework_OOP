#ifndef  __SQUARE__
#define  __SQUARE__

#include <iostream>
#include "shape.hpp"

class Square : public Shape {
public:
	Square() = default;
	Square(const int& surface);
	void draw() override;
};

#endif // __SQUARE__
