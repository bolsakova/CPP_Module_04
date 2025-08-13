#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"

int main () {
	std::cout << "=== Test Animals ===" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
	std::cout << std::endl;

	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();

    std::cout << "\n=== Deleting Animals ===" << std::endl;
    delete dog;
    delete cat;

    std::cout << "\n=== Test an Array of Animals ===" << std::endl;
    const int size = 4;
    const Animal* animals[size];

    // Половина массива — Dog, другая половина — Cat
    for (int k = 0; k < size / 2; ++k) {
        animals[k] = new Dog();
    }
    for (int k = size / 2; k < size; ++k) {
        animals[k] = new Cat();
    }

    std::cout << "\n=== Animals in the Array ===" << std::endl;
    for (int k = 0; k < size; ++k) {
        std::cout << animals[k]->getType() << ": ";
        animals[k]->makeSound();
    }

    std::cout << "\n=== Deleting the Array of Animals ===" << std::endl;
    for (int k = 0; k < size; ++k) {
        delete animals[k];
    }

    std::cout << "\n=== Testing Deep Copy ===" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Chase the ball");
    originalDog.getBrain()->setIdea(1, "Eat food");

    Dog copiedDog(originalDog); // Проверяем глубокое копирование
    copiedDog.getBrain()->setIdea(0, "Take a nap");
    copiedDog.getBrain()->setIdea(1, "Play with a stick");

    std::cout << "Original Dog Idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    std::cout << "Original Dog Idea 1: " << originalDog.getBrain()->getIdea(1) << std::endl;
    std::cout << "Copied Dog Idea 1: " << copiedDog.getBrain()->getIdea(1) << std::endl;

    std::cout << "\n=== Finished Testing ===" << std::endl;

    return 0;
}

