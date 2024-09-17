#ifndef __PILOT__
#define __PILOT__

#include <iostream>
#include <string>

class Pilot {
public:
	Pilot() = default;
	Pilot(const std::string& name, const int& seniority);
	
	void setName(const std::string& name);
	void setSeniority(const int& seniority);
	
	std::string getName() const;
	int getSeniority() const;

private:
	std::string m_name;
	int			m_seniority = 0;
};

#endif // __PILOT__
