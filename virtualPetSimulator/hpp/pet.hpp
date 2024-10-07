#pragma once

#include <iostream>
#include <string>

class Pet {
public:
    Pet(std::string name, int age);
    virtual void makeSound() = 0;
    virtual void eat() = 0;
    virtual void displayInfo();

protected:
    std::string m_name;
    int m_age;    
};