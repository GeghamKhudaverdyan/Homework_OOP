#ifndef  __SHAPE__
#define __SHAPE__

class Shape {
public:
	virtual double area() =0;
	virtual ~Shape() = default;
};

#endif // __SHAPE__
