#include "../hpp/wildPetFactory.hpp"

#include "../hpp/lion.hpp"
#include "../hpp/eagle.hpp"

Pet* WildPetFactory::createMammal() {
    return new Lion("Simba", 10);
}

Pet* WildPetFactory::createBird() {
    return new Eagle("Eagle", 20);
}