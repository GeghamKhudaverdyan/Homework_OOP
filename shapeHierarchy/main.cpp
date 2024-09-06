#include <iostream>
#include "shape.hpp"
#include "circle.hpp"
#include "square.hpp"
#include "triangle.hpp"
#include <vector>

int main() {
	Shape* shape1 = new Shape();
	Shape* shape2 = new Circle();
	Shape* shape3 = new Square();
	Shape* shape4 = new Triangle();

	std::vector<Shape*> shapes;
	shapes.push_back(shape1);
	shapes.push_back(shape2);
	shapes.push_back(shape3);
	shapes.push_back(shape4);

	for(int i = 0; i < shapes.size(); ++i) {
		shapes[i]->draw();
	}

	for(int i = 0; i < shapes.size(); ++i) {
		delete shapes[i];
	}

	return 0;
}
