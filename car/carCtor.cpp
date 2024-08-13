#include "car.hpp"

Car::Car(const std::string make, const std::string model, const int year, const double mileage) : 
	_make(make), _model(model), _year(year), _mileage(mileage) {}

Car::Car(const Car& car) {
	_make = car._make;
	_model = car._model;
	_year = car._year;
	_mileage = car._mileage;
}
