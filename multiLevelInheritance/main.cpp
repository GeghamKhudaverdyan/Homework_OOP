#include "electricCar.hpp"
#include "vehicle.hpp"
#include "car.hpp"

int main() {

	Vehicle* vehicle1 = new Car(100);
	Vehicle* vehicle2 = new Car;
	Vehicle* vehicle3 = new ElectricCar(200);
	Vehicle* vehicle4 = new ElectricCar;
	
	vehicle1->move();
	vehicle2->move();
	vehicle3->move();
	vehicle4->move();

	delete vehicle1;
	delete vehicle2;
	delete vehicle3;
	delete vehicle4;
	
	return 0;
}
