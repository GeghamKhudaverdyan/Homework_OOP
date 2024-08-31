#ifndef __PLANE__
#define __PLANE__

#include "pilot.hpp"
#include "engine.hpp"
#include <vector>

class Plane {
public:
	Plane() = default;
	Plane(const Pilot& pilot1, const Pilot& pilot2, const double& temperature, const double& oil);
	Plane(const Pilot& pilot1, const Pilot& pilot2, const Engine& engine);


	void pilotSitInPlane(const Pilot& pilot);
	void aboutPilots(const Pilot& Pilot);	

private:
	std::vector<Pilot> pilots;
	Engine m_engine;
};

#endif // __PLANE__
