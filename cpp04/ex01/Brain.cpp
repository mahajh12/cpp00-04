#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain is created!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain is destroyed!" << std::endl;
}

Brain::Brain(const Brain &b)
{
    std::cout << "Copy constructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = b.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &b)
{
    std::cout << "Copy assignment operator called for Brain" << std::endl;
    if (this != &b) {
        for (int i = 0; i < 100; ++i)
        {
            ideas[i] = b.ideas[i];
        }
    }
    return *this;
}