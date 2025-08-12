#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

	protected:
			std::string type;
	public:
			Animal();
			Animal(const std::string& type);
			Animal(const Animal& other);
			Animal operator=(const Animal& other);
			~Animal();

			virtual void makeSound();
};

#endif
