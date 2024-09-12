#include "washingMachine.hpp"

WashingMachine::WashingMachine(const bool onOrOff) : Appliance(onOrOff) {}

void WashingMachine::turnOn() {
	std::cout << "WashingMachine is turn ON beacuse power is " << seter() << std::endl;
}
