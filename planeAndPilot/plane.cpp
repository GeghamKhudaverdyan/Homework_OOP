#include "plane.hpp"

Plane::Plane(const Pilot& pilot1, const Pilot& pilot2, const double& temperature, const double& oil) :
			m_engine(temperature, oil) {

	pilots.push_back(pilot1);
	pilots.push_back(pilot2);

}

Plane::Plane(const Pilot& pilot1, const Pilot& pilot2, const Engine& engine) : m_engine(engine) {
	pilots.push_back(pilot1);
	pilots.push_back(pilot2);

}

void Plane::pilotSitInPlane(const Pilot& pilot) {
	pilots.push_back(pilot);
}

void Plane::aboutPilots(const Pilot& pilot) {

	std::cout << pilot.getName() << " " << pilot.getSeniority() << std::endl;
}
