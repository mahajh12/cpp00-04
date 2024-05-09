#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat is created!" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat is destroyed!" << std::endl;
}

Cat::Cat(const Cat &c) :  Animal()
{
    std::cout << "Copy constructor called" << std::endl;
    brain = new Brain(*c.brain);
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Copy assignment operator called for Cat" << std::endl;
    if (this != &c) {
        Animal::operator=(c);
        delete brain;
        brain = new Brain(*c.brain);
    }
    return *this;
}

void Cat::makeSound()const
{
    std::cout << "Meow!" << std::endl;
}