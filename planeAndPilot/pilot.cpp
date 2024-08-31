#include "pilot.hpp"

Pilot::Pilot(const std::string& name, const int& seniority) :
							m_name(name), m_seniority(seniority) {}

void Pilot::setName(const std::string& name) { m_name = name; }
void Pilot::setSeniority(const int& seniority) { m_seniority = seniority; }

std::string Pilot::getName()	  const { return m_name; }
int 		Pilot::getSeniority() const { return m_seniority; }
