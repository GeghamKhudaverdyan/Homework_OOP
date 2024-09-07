#ifndef __MANAGER__
#define __MANAGER__

#include "employee.hpp"

class Manager : public Employee {
public:
Manager() = default;
	Manager(const int& salary);
	int calculateSalary() const override;
	~Manager() = default;
private:
	int m_salary = 1000;
};

#endif //__MANAGER__ 
