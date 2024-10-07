#include "../hpp/domesticPetFactory.hpp"
#include "../hpp/dog.hpp"
#include "../hpp/parrat.hpp"

Pet* DomesticPetFactory::createMammal() {
    return new Dog("Berta", 5);
}

Pet* DomesticPetFactory::createBird() {
    return new Parrat("Rio", 3);
}