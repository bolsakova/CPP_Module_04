#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "A cheerful dog has appeared, ready to play fetch!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "A clone of a happy dog has been created!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "One dog is learning the habits of another!" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog() {
	std::cout << "A dog has gone to take a nap in its cozy bed..." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "The dog excitedly barks: Woof! Woof!" << std::endl;
}
