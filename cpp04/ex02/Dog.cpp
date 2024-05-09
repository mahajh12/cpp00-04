#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    std::cout << "Dog is created!" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog is destroyed!" << std::endl;
}

Dog::Dog(const Dog &d) : Animal()
{
    std::cout << "Copy constructor called" << std::endl;
    brain = new Brain(*d.brain);
}

Dog &Dog::operator=(const Dog &d)
{
    std::cout << "Copy assignment operator called for Dog" << std::endl;
    if (this != &d) {
        Animal::operator=(d);
        delete brain;
        brain = new Brain(*d.brain);
    }
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "Bark!" << std::endl;
}