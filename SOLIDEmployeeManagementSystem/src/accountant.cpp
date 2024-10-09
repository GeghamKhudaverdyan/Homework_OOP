#include "../hpp/accountant.hpp"

Accountant::Accountant(std::string name, double baseSalary, int id, int financialReports)
                      : Employee(name, baseSalary, id), m_financialReports{m_financialReports} {}

void Accountant::displayInfo() const {
    std::cout << "Name is " << m_name << std::endl;
    std::cout << "ID is " << m_id << std::endl;
    std::cout << "FinalSalary is " << m_finalSalary << std::endl;
    std::cout << "BalanceSalery is " << m_baseSalary << std::endl;
    if(m_financialReports > 0) {
        std::cout << "TotalSelse is " << m_financialReports << std::endl;
    } else {
        std::cout << "Does not exist totalSelses, please call addSales function and and add projects. " << std::endl;
    }
}

void Accountant::addReports(int reports) {
    if(reports > 0) {
        m_financialReports += reports;
    }
}