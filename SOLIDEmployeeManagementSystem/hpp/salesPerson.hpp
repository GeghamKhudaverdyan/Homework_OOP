#ifndef __SALESPERSON__
#define __SALESPERSON__

#include "employee.hpp"

class SalesPerson : public Employee {
public:
    SalesPerson(std::string name, double baseSalary, int id, int totalSeles);
    void displayInfo() const override;
    void addSales(double totalSeles);
private:
    double m_totalSales;
};

#endif // __SALESPERSON__