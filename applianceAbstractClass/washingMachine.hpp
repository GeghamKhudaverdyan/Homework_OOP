#ifndef __WASHINGMACHINE__
#define  __WASHINGMACHINE__

#include "appliance.hpp"

class WashingMachine : public Appliance {
public:
	WashingMachine(const int& powerUsage);
	std::string turnOn() override;
	std::string turnOff() override;
};

#endif // __WASHINGMACHINE__
