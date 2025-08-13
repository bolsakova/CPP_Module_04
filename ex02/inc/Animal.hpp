#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

// abstract class - we have at least 1 pure virtual function
class Animal {

	protected:
			std::string type;
	public:
			Animal();
			Animal(const std::string& type);
			Animal(const Animal& other);
			Animal& operator=(const Animal& other);
			virtual ~Animal();

			virtual void makeSound() const = 0;	// compilator sees that function doesn't have realization
			const std::string& getType() const;
};

#endif
