#include <iostream>
#include "shape.hpp"
#include "circle.hpp"
#include "rectangle.hpp"

int main() {
	Shape* sh1 = new Circle(5);

	std::cout << "Circle area is: " <<  sh1->area() << std::endl;
	
	Shape* sh2 = new Rectangle(2, 3);
	std::cout << "rectangle area is: " << sh2->area() << std::endl;

	delete sh1;
	delete sh2;
	return 0;
}
