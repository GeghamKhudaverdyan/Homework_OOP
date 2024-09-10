#ifndef __IVEHICLE__
#define __IVEHICLE__

class IVehicle {
public:
	virtual std::string startEngine() =0;
	virtual std::string stopEngine() =0;
	virtual double refuel(const double& ref) =0;
	
	virtual ~IVehicle() = default;
};

#endif // __IVEHICLE__
