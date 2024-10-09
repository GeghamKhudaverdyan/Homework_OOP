#include <iostream>
#include "../hpp/developer.hpp"
#include "../hpp/developerManager.hpp"
#include "../hpp/salesPerson.hpp"

int main() {

    Developer d("name", 12, 13, 111, 2);
    d.addProject(2);
    d.displayInfo();

    return 0;
}