#include <iostream>
#include "car.hpp"
#include "driver.hpp"
#include "engine.hpp"

int main() {
	Driver driver1;
	driver1.setName("Mark");
	driver1.setAge(35);
	driver1.setSeniority(17);
	
	Driver driver2("Adam", 50, 30);

	Car ford("Fusion", 2013, "Sport", 6, driver1);
	ford.aboutDriver();	
	std::cout << std::endl;
	ford.aboutEngine();
	return 0;
}
