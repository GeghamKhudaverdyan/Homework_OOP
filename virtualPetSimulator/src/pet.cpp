#include "../hpp/pet.hpp"

Pet::Pet(std::string name, int age) : m_name(name), m_age(age) {}

void Pet::displayInfo() {
    std::cout << "Name is " << m_name << std::endl;
    std::cout << "Age is " << m_age << std::endl;
}