#include "../inc/Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "A mysterious animal has appeared!" << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
	std::cout << "A " << type << " has been created!" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "A copy of a " << other.type << " has been made!" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "An animal is transforming into a " << other.type << "!" << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "An animal of type " << type << " has diappeared into the wild..." << std::endl;
}

// void Animal::makeSound() const {
// 	std::cout << "The " << type << " makes an indistinct sound." << std::endl;
// }

const std::string& Animal::getType() const {
	return type;
}
