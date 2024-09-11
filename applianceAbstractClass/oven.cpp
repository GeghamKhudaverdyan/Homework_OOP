#include "oven.hpp"

Oven::Oven(const int& powerUsage) : Appliance(powerUsage) {}

std::string Oven::turnOn() {
	return "ON";
}

std::string Oven::turnOff() {
	return "OFF";
}
