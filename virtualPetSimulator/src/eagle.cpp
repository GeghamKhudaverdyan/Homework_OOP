#include "../hpp/eagle.hpp"

Eagle::Eagle(std::string name, int age) : Pet(name, age) {}

void Eagle::makeSound() {
    std::cout << " Eagle sound " << std::endl;
}

void Eagle::eat() {
    std::cout << " Eagle eating " << std::endl;
}