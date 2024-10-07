#pragma once

#include <memory>
#include "pet.hpp"

class AbstractPetFactory {
public:
    virtual Pet* createMammal() = 0;
    virtual Pet* createBird() = 0;
};