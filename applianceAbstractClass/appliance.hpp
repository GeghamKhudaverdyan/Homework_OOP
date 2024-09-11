#ifndef  __APPLIANCE__
#define  __APPLIANCE__

#include <string>

class Appliance {
public:
	Appliance(const int& powerUsage);
	virtual std::string turnOn() =0;
	virtual std::string turnOff() =0;
	int getPower() const;
	virtual ~Appliance() = default;

private:
	int m_powerUsage;
};

#endif // __APPLIANCE__e
