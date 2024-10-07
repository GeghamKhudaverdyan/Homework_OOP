#pragma once

#include "type.hpp"
#include "AbstractPetFactory.hpp"
#include "domesticPetFactory.hpp"
#include "wildPetFactory.hpp"

class AbstractPetFactory;

class PetAdoptionCenter {
public:
    static PetAdoptionCenter* getInstance(Type type);
    
private:
    PetAdoptionCenter(Type type);
    AbstractPetFactory* m_abstractP; 
    static PetAdoptionCenter* m_ptr;
};