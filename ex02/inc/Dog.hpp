#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

class Dog : public Animal {

	private:
			Brain* brain;
	public:
			Dog();
			Dog(const Dog& other);
			Dog& operator=(const Dog& other);
			~Dog();
			
			void makeSound() const override;
			Brain* getBrain() const;
};

#endif
