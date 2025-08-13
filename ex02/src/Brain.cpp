#include "../inc/Brain.hpp"

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
	std::cout << "A brain has been destroyed, along with all its ideas!" << std::endl;
}

std::string Brain::getIdea(int index) const {
    if (index < 0 || index >= 100) {
        std::cerr << "Error: Index out of bounds in getIdea(). Returning empty string." << std::endl;
        return "";
    }
    return ideas[index];
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index < 0 || index >= 100) {
        std::cerr << "Error: Index out of bounds in setIdea(). Idea not set." << std::endl;
        return;
    }
    ideas[index] = idea;
}
