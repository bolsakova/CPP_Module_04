#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "A strange WrongCat has appeared!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "A duplicate of a WrongCat has been created!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "One WrongCat is imitating another!" << std::endl;
	if (this != &other)
	WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "A WrongCat has vanished!" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow...? (something is definitely wrong...)" << std::endl;
}


