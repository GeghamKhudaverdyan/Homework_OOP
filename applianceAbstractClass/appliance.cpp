#include "appliance.hpp"

Appliance::Appliance(const int& powerUsage) : m_powerUsage(powerUsage) {}

int Appliance::getPower() const {
	return m_powerUsage;
}
