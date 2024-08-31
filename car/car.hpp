#ifndef  __CAR__
#define  __CAR__

#include <string>
#include <iostream>

class Car{
public:
	//Constructors
	Car() = default;
	Car(const std::string make, const std::string model, const int year, const double mileage);
	
	//Copy constructor
	Car(const Car& car);
	
	//Getters	
	std::string getMake()    const;
	std::string getModel()   const;
	int 	    getYear()    const;
	double      getMileage() const;
	
	//Setters
	void setMake(const std::string make);
	void setModel(const std::string model);
	void setYear(const int year);
	void setMileage(const double mileage);

	//Functions
	void displayInfo();
	double drive(double distance);
	int service();
	
private:
	std::string _make = {};
	std::string _model = {};
	int _year = 0;
	double _mileage = 0;
	double distance = 0;
};

#endif // __CAR__
