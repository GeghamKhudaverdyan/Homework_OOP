#ifndef  __WASHINGMACHINE__
#define __WASHINGMACHINE__

#include "appliance.hpp"

class WashingMachine : public Appliance {
public:
	WashingMachine(const bool onOrOff);
	void turnOn() override;
};

#endif // __WASHINGMACHINE__
