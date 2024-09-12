#include "vehicle.hpp"

Vehicle::Vehicle(const int& speed) : m_speed(speed) {}

int Vehicle::getSpeed() const {
	return m_speed;
}
