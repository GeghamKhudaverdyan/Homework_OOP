#ifndef __EMPLOYEEMANAGEMENTSYSTEM__
#define __EMPLOYEEMANAGEMENTSYSTEM__

#include <memory>
#include "developerManager.hpp"
#include "financeManager.hpp"

class EmployeeManagmentSystem {
public:

    //void addEmployeeToDepartment(std::shared_ptr<Employee> employee, /* Type type */);

private:
    std::shared_ptr<DeveloperManager> m_developers;
    std::shared_ptr<FinanceManager> m_finances;
};

#endif // __EMPLOYEEMANAGEMENTSYSTEM__