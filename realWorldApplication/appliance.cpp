#include "appliance.hpp"

Appliance::Appliance(const bool onOrOff) : m_onOrOff(onOrOff) {}

void Appliance::turnOff() {
	m_onOrOff = 0;
	std::cout << "Appliance value is " << m_onOrOff << ", it means it's OFF․" << std::endl;
}

bool Appliance::seter() {
	m_onOrOff = 1;
	return m_onOrOff;
}
