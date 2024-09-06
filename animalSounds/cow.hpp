#ifndef __COW__
#define  __COW__

#include <iostream>
#include "animal.hpp"

class Cow : public Animal {
public:
	void makeSound() const override;
	~Cow() = default;
};

#endif // __COW__
