#ifndef __EMPLOYEE__
#define __EMPLOYEE__

#include <iostream>
#include <string>
#include <memory>

class Employee {
public:
    Employee(std::string name, double baseSalary, int id);
    virtual void displayInfo() const = 0;
    virtual ~Employee() = default;
    
protected:
    std::string m_name;
    double m_baseSalary;
    double m_finalSalary;
    int m_id;
};

#endif // __EMPLOYEE__