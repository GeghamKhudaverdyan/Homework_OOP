#ifndef  __CAR__
#define __CAR__

#include <string>
#include "iVehicle.hpp"

class Car : public IVehicle {
public:
	Car() = delete;
	Car(const double& petrol);
	double getPetrol() const;
	std::string startEngine() override;
	std::string stopEngine() override;
	double refuel(const double& ref) override;
	
	~Car() = default;

private:
	double m_petrol;
	bool m_startStop = 0;
};

#endif // __CAR__
