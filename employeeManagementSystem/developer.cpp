#include "developer.hpp"

Developer::Developer(const int& salary) : m_salary(salary) {}

int Developer::calculateSalary() const {
	return m_salary;
}
