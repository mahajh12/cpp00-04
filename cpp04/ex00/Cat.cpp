#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat is created!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat is destroyed!" << std::endl;
}

Cat::Cat(const Cat &c) :  Animal()
{
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &c)
    {
        this->type = c.type;
    }
    return(*this);
}

void Cat::makeSound()const
{
    std::cout << "Meow!" << std::endl;
}