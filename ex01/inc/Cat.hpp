#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

class Cat : public Animal {
	
	private:
			Brain* brain;
	public:
			Cat();
			Cat(const Cat& other);
			Cat& operator=(const Cat& other);
			~Cat();
			
			void makeSound() const override;
			Brain* getBrain() const;
};

#endif
