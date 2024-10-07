#pragma once

#include "pet.hpp"

class Eagle : public Pet {
public:
    void makeSound() override;
    void eat() override;
    friend class WildPetFactory;
private:
    Eagle(std::string name, int age);
};