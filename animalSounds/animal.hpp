#ifndef __ANIMALS__
#define  __ANIMALS__

class Animal {
public:
	virtual void makeSound() const =0;
	virtual ~Animal() = default;
};

#endif // __ANIMALS_
