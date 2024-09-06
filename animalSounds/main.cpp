#include <vector>
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "cow.hpp"

int main() {
	std::vector<Animal*> animals;

	animals.push_back(new Dog());
	animals.push_back(new Cat());
	animals.push_back(new Cow());
	
	for(int i = 0; i < animals.size(); ++i) {
			animals[i]->makeSound();	
	}

	//for(int i = 0; i < animals.size(); ++i) {
	//	delete animals[i];
	//}

	return 0;
}
