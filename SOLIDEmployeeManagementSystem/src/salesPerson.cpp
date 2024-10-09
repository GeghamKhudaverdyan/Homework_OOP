#include "../hpp/salesPerson.hpp"

SalesPerson::SalesPerson(std::string name, double baseSalary, int id, int totalSeles)
                         : Employee(name, baseSalary, id), m_totalSales(totalSeles) {}

void SalesPerson::displayInfo() const {
    std::cout << "Name is " << m_name << std::endl;
    std::cout << "ID is " << m_id << std::endl;
    std::cout << "FinalSalary is " << m_finalSalary << std::endl;
    std::cout << "BalanceSalery is " << m_baseSalary << std::endl;
    if(m_totalSales > 0) {
        std::cout << "TotalSelse is " << m_totalSales << std::endl;
    } else {
        std::cout << "Does not exist totalSelses, please call addSales function and and add projects. " << std::endl;
    }
}

void SalesPerson::addSales(double totalSeles) {
    if(totalSeles > 0) {
        m_totalSales += totalSeles;
    }
}