#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog is created!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog is destroyed!" << std::endl;
}

Dog::Dog(const Dog &d) : Animal()
{
    std::cout << "Copy constructor called" << std::endl;
    *this = d;
}

Dog &Dog::operator=(const Dog &d)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &d)
    {
        this->type = d.type;
    }
    return(*this);
}

void Dog::makeSound()const
{
    std::cout << "Bark!" << std::endl;
}