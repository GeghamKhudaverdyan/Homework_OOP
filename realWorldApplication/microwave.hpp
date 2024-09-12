#ifndef __MICROWAVE__
#define  __MICROWAVE__

#include "appliance.hpp"

class Microwave : public Appliance {
public:
	Microwave(const bool onOrOff);
	void turnOn() override;
};

#endif // __MICROWAVE__
