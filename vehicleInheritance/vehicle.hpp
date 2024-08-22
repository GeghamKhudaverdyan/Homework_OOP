#ifndef __VEHICLE__
#define __VEHICLE__

class Vehicle{
public:	
	Vehicle(double& weight, double& maxSpeed);
	void displayInfo() const;

protected:
	 double m_weight = 0;
	 double m_maxSpeed = 0;
};

#endif //__VEHICLE__
