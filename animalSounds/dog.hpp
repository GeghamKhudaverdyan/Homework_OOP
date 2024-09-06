#ifndef  __DOG__
#define  __DOG__

#include <iostream>
#include "animal.hpp"

class Dog : public Animal {
public:
	void makeSound() const override;
	~Dog() = default;
};

#endif // __DOG__
