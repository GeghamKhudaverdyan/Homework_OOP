#include <iostream>
#include "oven.hpp"
#include "appliance.hpp"
#include "washingMachine.hpp"

int main() {

	Appliance* app1 = new WashingMachine(50);
	Appliance* app2 = new Oven(5);
	
	std::cout << "WashingMachine informatin:" << std::endl;
	std::cout << app1->turnOn() << std::endl;
	std::cout << app1->turnOff() << std::endl;
	std::cout << "Power is: " << app1->getPower() << std::endl;

	std::cout << "Oven informatin:" << std::endl;
	std::cout << app2->turnOn() << std::endl;
	std::cout << app2->turnOff() << std::endl;
	std::cout << "Power is: " << app2->getPower() << std::endl;
	
	delete app1;
	delete app2;

	return 0;
}
