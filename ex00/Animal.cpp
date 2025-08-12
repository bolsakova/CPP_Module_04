#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal defalut constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
	std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {

}

Animal::~Animal() {

}

void Animal::makeSound() {

}

const std::string& Animal::getType() const {

}
