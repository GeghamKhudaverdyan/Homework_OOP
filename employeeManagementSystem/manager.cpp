#include "manager.hpp"

Manager::Manager(const int& salary) : m_salary(salary) {}

int Manager::calculateSalary() const {
	return m_salary;
}
