#include <iostream>
#include "../hpp/petAdoptionCenter.hpp"
#include "../hpp/type.hpp"

int main() {

    PetAdoptionCenter* ptr = PetAdoptionCenter::getInstance(Type::Domestic);
    PetAdoptionCenter* ptr1 = PetAdoptionCenter::getInstance(Type::Wild);

    return 0;   
}