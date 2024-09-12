#ifndef __APPLIANCE__
#define  __APPLIANCE__

#include <iostream>

class Appliance {
public:
	Appliance(const bool onOrOff);
	virtual void turnOn() =0;
	void turnOff();
	virtual ~Appliance() = default;
	bool seter();

private:
	bool m_onOrOff;
};

#endif // __APPLIANCE__
