#ifndef __DEVELOPER__
#define __DEVELOPER__

#include "employee.hpp"

class Developer : public Employee {
public:
    Developer(std::string name, double baseSalary, int id, int projects);
    void displayInfo() const override;
    void addProject(int count);
    int getProjects();

private:
    int m_projects;
};

#endif // __DEVELOPER__