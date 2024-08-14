#include <iostream>
#include "car.hpp"

int main() {
		/*___Task 1___*/
	/*
	Car carT1;

	carT1.setMake("BMW");
	carT1.setModel("X3 M SUV");
	carT1.setYear(2024);
	carT1.setMileage(5);	

	std::cout << carT1.getMake() << std::endl;
	std::cout << carT1.getModel() << std::endl;
	std::cout << carT1.getYear() << std::endl;
	std::cout << carT1.getMileage() << std::endl;
	
	carT1.displayInfo();
	*/


		/*___Task 2___*/
	/*	
	Car carT2_01;
	carT2_01.displayInfo();
	
	Car carT2_02("Mercedes-Benz", "C-180", 1997, 406555);	
	carT2_02.displayInfo();
	
	Car carT2Copy(carT2_02);
	carT2Copy.displayInfo();
	*/

		/*___Task 3 ___*/
	
	Car carT3("Mercedes-Benz", "C-180", 1997, 406555);
	int distance = 0;
	std::cout << " How many kilometers did you drive today? " << std::endl;
	std::cin >> distance;

	int answer = carT3.drive(distance);
	if(answer == 0) {
	
	} else {
		std::cout << "Now your car mileage is " << answer << " kilometers. " << std::endl;
	}

	carT3.service();
	carT3.displayInfo();

	return 0;
}
