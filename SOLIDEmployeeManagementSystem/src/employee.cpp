#include "../hpp/employee.hpp"

Employee::Employee(std::string name, double baseSalary, int id) 
                  : m_name{name}, m_baseSalary{baseSalary}, m_id{id} {}