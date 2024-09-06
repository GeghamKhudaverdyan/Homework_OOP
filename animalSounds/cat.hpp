#ifndef __CAT__
#define __CAT__

#include <iostream>
#include "animal.hpp"

class Cat : public Animal {
public:
	void makeSound() const override;
	~Cat() = default;
};

#endif // __CAT__
