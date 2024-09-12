#include "microwave.hpp"

Microwave::Microwave(const bool onOrOff) : Appliance(onOrOff) {}

void Microwave::turnOn() {
	std::cout << "Microwave is turn ON because power is " << this->seter() << std::endl;
}
