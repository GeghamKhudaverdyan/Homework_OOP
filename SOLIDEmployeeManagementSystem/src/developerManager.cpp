#include "../hpp/developerManager.hpp"

DeveloperManager::DeveloperManager(std::string name, double baseSalary, int id) 
                                  : Employee(name, baseSalary, id), m_bonus{100} {}

void DeveloperManager::displayInfo() const {
    std::cout << "Developer name " << m_name << ", Salary: " << m_finalSalary << std::endl;
}

double DeveloperManager::calculateSalary() const {
    return m_baseSalary * (m_bonus);
}