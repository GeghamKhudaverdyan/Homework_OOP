#pragma once

#include "pet.hpp"

class Parrat : public Pet {
public:
    void makeSound() override;
    void eat() override;
    friend class DomesticPetFactory;
private:
    Parrat(std::string name, int age);
};