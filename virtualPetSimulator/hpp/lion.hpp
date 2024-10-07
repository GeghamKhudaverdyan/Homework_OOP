#pragma once

#include "pet.hpp"

class Lion : public Pet {
public:
    void makeSound() override;
    void eat() override;
    friend class WildPetFactory;
private:
    Lion(std::string name, int age);
};