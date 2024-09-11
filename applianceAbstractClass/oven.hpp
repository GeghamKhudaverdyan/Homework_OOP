#ifndef __OVEN__
#define  __OVEN__

#include "appliance.hpp"

class Oven : public Appliance {
public:
	Oven(const int& powerUsage);
	std::string turnOn() override;
	std::string turnOff() override;
};

#endif // __OVEN__
