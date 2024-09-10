#ifndef  __BIKE__
#define __BIKE__

#include <string>
#include "iVehicle.hpp"

class Bike : public IVehicle {
public:
	Bike() = delete;
	Bike(const double& petrol);
	double getPetrol() const;
	std::string startEngine() override;
	std::string stopEngine() override;
	double refuel(const double& ref) override;
	
	virtual ~Bike() = default;

private:
	double m_petrol;
	bool m_startStop = 0;
};

#endif // __BIKE__
