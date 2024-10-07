#pragma once

#include "AbstractPetFactory.hpp"

class WildPetFactory : public AbstractPetFactory {
public:
    Pet* createMammal() override;
    Pet* createBird() override;
};