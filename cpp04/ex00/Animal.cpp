#include "Animal.hpp"

Animal::Animal() : type("default")
{
    std::cout << "Animal is created!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal is destroyed!" << std::endl;
}

Animal::Animal(const Animal &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Animal &Animal::operator=(const Animal &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &a)
    {
        this->type = a.type;
    }
    return(*this);
}

void Animal::makeSound()const
{
    std::cout << "doesnt make a sound!" << std::endl;
}

std::string Animal::getType()const
{
    return (this->type);
}