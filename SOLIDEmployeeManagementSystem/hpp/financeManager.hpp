#ifndef __FINANCEMANAGER__
#define __FINANCEMANAGER__

#include <vector>
#include "employee.hpp"
#include "ISalaryCalc.hpp"
#include "account.hpp"

class FinanceManager : public Employee, public ISalaryCalc {
public:
    FinanceManager(std::string name, double baseSalary, int id);
    void displayInfo() const override;
    double calculateSalary() const override;

private:
    std::vector<std::shared_ptr<Account>> m_accounts;
    int m_accountantCount;
    const int m_bonus;
};

#endif // __FINANCEMANAGER__