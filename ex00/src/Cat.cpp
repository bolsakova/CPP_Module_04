#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "A curious cat has appeared, ready to explore!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "A copy of a playful cat has been created!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "A cat is mimicking another cat's behavior!" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat() {
	std::cout << "A cat has wandered off into the night..." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "The cat softly purrs: Meow! Meow!" << std::endl;
}
