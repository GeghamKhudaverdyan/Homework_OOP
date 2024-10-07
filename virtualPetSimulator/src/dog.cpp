#include "../hpp/dog.hpp"

Dog::Dog(std::string name, int age) : Pet(name, age) {}

void Dog::makeSound() {
    std::cout << " Dog sound. " << std::endl;
}

void Dog::eat() {
    std::cout << " Dog eating. " << std::endl;
}