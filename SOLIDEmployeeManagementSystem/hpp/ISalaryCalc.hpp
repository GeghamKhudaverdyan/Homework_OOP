#ifndef __ISALARYCALC__
#define __ISALARYCALC__

#include "employee.hpp"

class ISalaryCalc {
public:
    virtual double calculateSalary() const = 0;
    virtual ~ISalaryCalc() = default;
};

#endif // __ISALARYCALC__