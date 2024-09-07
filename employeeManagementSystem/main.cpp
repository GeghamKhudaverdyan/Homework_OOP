#include <iostream>
#include <vector>
#include "employee.hpp"
#include "manager.hpp"
#include "developer.hpp"

int main() {
	Employee* emp1 = new Manager(1100);
	Employee* emp2 = new Manager();
	Employee* emp3 = new Developer(600);
	Employee* emp4 = new Developer();

	std::vector<Employee*> emploees;

	emploees.push_back(emp1);
	emploees.push_back(emp2);
	emploees.push_back(emp3);
	emploees.push_back(emp4);
	
	for(int i = 0; i < emploees.size(); ++i) {
		std::cout << emploees[i]->calculateSalary() << std::endl;
	}
	
	for(int i = 0; i < emploees.size(); ++i) {
		delete emploees[i];
	}
	return 0;
}
