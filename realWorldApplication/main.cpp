#include "appliance.hpp"
#include "washingMachine.hpp"
#include "microwave.hpp"

int main() {
	
	Appliance* app1 = new WashingMachine(0);
	Appliance* app2 = new Microwave(0);
	
	app1->turnOn();
	app2->turnOn();
	
	app1->turnOff();
	app2->turnOff();

	delete app1;
	delete app2;

	return 0;
}
