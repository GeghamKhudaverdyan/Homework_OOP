#ifndef __DEVELOPERMANAGER__
#define __DEVELOPERMANAGER__

#include <vector>
#include "employee.hpp"
#include "ISalaryCalc.hpp"
#include "developer.hpp"

class DeveloperManager : public Employee, public ISalaryCalc {
public:
    DeveloperManager(std::string name, double baseSalary, int id);
    void displayInfo() const override;
    double calculateSalary() const override;

private:
    std::vector<std::shared_ptr<Developer>> m_developers;
    int m_developerCount;
    const int m_bonus;
};

#endif // __DEVELOPERMANAGER__