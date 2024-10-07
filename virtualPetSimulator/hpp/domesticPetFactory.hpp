#pragma once

#include "AbstractPetFactory.hpp"

class DomesticPetFactory : public AbstractPetFactory {
public:
    Pet* createMammal() override;
    Pet* createBird() override;

};