#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "A strange WrongAnimal has appeared!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type) {
	std::cout << "A WrongAnimal of type " << type << " has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "A copy of a WrongAnimal has been made!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "A WrongAnimal is copying another WrongAnimal!" << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "A WrongAnimal has disappeared!" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "The WrongAnimal makes a strange sound!" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return type;
}
