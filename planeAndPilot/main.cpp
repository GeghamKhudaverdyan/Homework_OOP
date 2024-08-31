#include <iostream> 
#include "plane.hpp"
#include "pilot.hpp"
#include "engine.hpp"

int main() {
	std::string name1 = "Noel";
	int seniority1 = 20;
	Pilot pilot1(name1, seniority1);
	
	std::string name2 = "Bob";
	int seniority2 = 40;
	Pilot pilot2(name2, seniority2);
	
	Plane plane1;
	plane1.pilotSitInPlane(pilot1);
	plane1.pilotSitInPlane(pilot2);
	
	plane1.aboutPilots(pilot1);
	plane1.aboutPilots(pilot2);

	Plane plane2(pilot1, pilot2, 35.5, 80);
	
	Plane plane3(pilot1, pilot2, Engine(5, 10));
	
	return 0;
}
