#ifndef __DRIVER__
#define __DRIVER__

#include <string>

class Driver {
public:
	Driver() = default;
	Driver(const std::string& name, const int& age, const int& seniority);
	
	void setName(const std::string& name);
	void setAge(const int& age);
	void setSeniority(const int& seniority);

	std::string getName() const;
	int getAge() const;
	int getSeniority() const;

private:
	std::string m_name;
	int m_age;
	int m_seniority;
};


#endif // __DRIVER__
