#include "../hpp/lion.hpp"

Lion::Lion(std::string name, int age) : Pet(name, age) {}

void Lion::makeSound() {
    std::cout << " Lion sound " << std::endl;
}

void Lion::eat() {
    std::cout << " Lion eating " << std::endl;
}