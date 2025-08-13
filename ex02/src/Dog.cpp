#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
	std::cout << "A dog has been created with a new brain!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
	std::cout << "A dog has been copied, along with its brain!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "A dog is being assigned!" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		*brain = *other.brain; // deep copy
	}
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "A dog has been destroyed, along with its brain!" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "The dog excitedly barks: Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain() const {
	return brain;
}

