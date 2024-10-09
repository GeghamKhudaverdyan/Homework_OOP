#ifndef __ACCOUNTANT__
#define __ACCOUNTANT__

#include "employee.hpp"

class Accountant : public Employee {
public:
    Accountant(std::string name, double baseSalary, int id, int financialReports);
    void displayInfo() const override;
    void addReports(int reports);
    
private:
    int m_financialReports;

};

#endif // __ACCOUNTANT__