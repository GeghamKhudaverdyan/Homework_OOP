#include "../hpp/parrat.hpp"

Parrat::Parrat(std::string name, int age) : Pet(name, age) {}

void Parrat::makeSound() {
    std::cout << " Parrat sound " << std::endl;
}

void Parrat::eat() {
    std::cout << " Parrat eating " << std::endl;
}