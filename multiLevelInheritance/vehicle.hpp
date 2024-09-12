#ifndef __VEHICLE__
#define __VEHICLE__

class Vehicle {
public:
	Vehicle() = default;
	Vehicle(const int& speed);
	virtual void move() = 0;
	virtual ~Vehicle() = default;
	int getSpeed() const;
private:
	int m_speed = 50;
};

#endif //__VEHICLE__ZZ
