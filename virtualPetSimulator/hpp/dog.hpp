#pragma once

#include "pet.hpp"

class Dog : public Pet {
public:
    void makeSound() override;
    void eat() override;
    friend class DomesticPetFactory;
private:
    Dog(std::string name, int age);
};