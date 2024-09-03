#include "driver.hpp"

Driver::Driver(const std::string& name, const int& age, const int& seniority) : 
			  m_name(name), m_age(age), m_seniority(seniority) {}

void Driver::setName(const std::string& name) {
	m_name = name;	
}

void Driver::setAge(const int& age) {
	m_age = age;	
}

void Driver::setSeniority(const int& seniority) {
	m_seniority = seniority;	
}

std::string Driver::getName() const {
	return m_name;
}

int Driver::getAge() const {
	return m_age;
}
int Driver::getSeniority() const {
	return m_seniority;
}
