#ifndef __EMPLOEE__
#define __EMPLOEE__

class Employee {
public:
	virtual int calculateSalary() const =0;
	virtual ~Employee() = default;
};

#endif //__EMPLOEE__ 
