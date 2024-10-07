#include "../hpp/petAdoptionCenter.hpp"

PetAdoptionCenter::PetAdoptionCenter(Type type) {
    if(type == Type::Domestic) {
        m_abstractP = new DomesticPetFactory();
    } else if(type == Type::Wild) {
        m_abstractP = new WildPetFactory();
    } else {
        std::cerr << "Type not match!" << std::endl;
    } 
}

PetAdoptionCenter* PetAdoptionCenter::getInstance(Type type) {

    if(m_ptr == nullptr) {
        m_ptr = new PetAdoptionCenter(type);
        return m_ptr;
    }
    return m_ptr;
}

PetAdoptionCenter* PetAdoptionCenter::PetAdoptionCenter::m_ptr = nullptr;