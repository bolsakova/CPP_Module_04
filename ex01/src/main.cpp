#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main () {
	std::cout << "=== Correct Polymorphism ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // cat sound
	j->makeSound(); // dog sound
	meta->makeSound(); // animal sound
	
	delete meta;
	delete j;
	delete i;
	
	std::cout << "=== Incorrect Polymorphism ===" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongCat* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	wrongCat->makeSound();

	delete wrongMeta; // wrongAnimal sound
	delete wrongCat; // wrongAnimal sound, instead of wrongCat

	return 0;
}
