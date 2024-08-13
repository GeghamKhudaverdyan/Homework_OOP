#include "car.hpp"

std::string Car::getMake() const {return _make;}
std::string Car::getModel() const {return _model;}
int 	    Car::getYear() const {return _year;}
double 	    Car::getMileage() const {return _mileage;}

void Car::setMake(const std::string make) {_make = make;}
void Car::setModel(const std::string model) {_model = model;}
void Car::setYear(const int year) {_year = year;}
void Car::setMileage(const double mileage) {_mileage = mileage;}
