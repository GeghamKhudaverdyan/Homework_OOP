#ifndef __SHAPE__
#define __SHAPE__

#include <iostream>

class Shape {
public:
	Shape() = default;
	Shape(const int& surface);
	virtual void draw();
	virtual ~Shape();

private:
	int m_surface;
};

#endif // __SHAPE__
