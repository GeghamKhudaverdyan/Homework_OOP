#include "../hpp/financeManager.hpp"

FinanceManager::FinanceManager(std::string name, double baseSalary, int id) 
                              : Employee(name, baseSalary, id), m_bonus{200} {}

void FinanceManager::displayInfo() const {
    std::cout << "Accountant Name: " << m_name << ", Salary: " << m_finalSalary << std::endl;
}

double FinanceManager::calculateSalary() const {
    return m_baseSalary * (m_bonus);
}