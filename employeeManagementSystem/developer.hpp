#ifndef __DEVELOPER__
#define __DEVELOPER__

#include "employee.hpp"

class Developer : public Employee {
public:
	Developer() = default;
	Developer(const int& salary);
	int calculateSalary() const override;
	~Developer() = default;

private:
	int m_salary = 500;
};

#endif // __DEVELOPER__
