#include "Brain.hpp"

Brain::Brain() {
	std::cout << "A new brain has been created, full of empty ideas!" << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = "Empty idea";
}

Brain::Brain(const Brain& other) {
	std::cout << "A brain has been copied, duplicating its ideas!" << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "A brain is being assigned new ideas!" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "A brain has been destroyed? along with all its ideas!" << std::endl;
}
