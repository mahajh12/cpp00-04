#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_points = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " was created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " was destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &s) : ClapTrap(s)
{
}

FragTrap &FragTrap::operator=(const FragTrap &s)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &s)
    {
        ClapTrap::operator=(s);
    }
    return(*this);
}                                                                                                 

void FragTrap::highFivesGuys()
{
    std::cout << "Give me a high five!" << std::endl;
}
