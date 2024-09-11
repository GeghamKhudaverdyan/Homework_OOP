#include "washingMachine.hpp"

WashingMachine::WashingMachine(const int& powerUsage) : Appliance(powerUsage) {}

std::string WashingMachine::turnOn() {
	return "ON";
}

std::string WashingMachine::turnOff() {
	return "OFF";
}
