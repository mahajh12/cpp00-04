#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_points = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " was created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " was destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s) : ClapTrap(s)
{
    std::cout << "Copy constructor called" << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &s)
    {
        ClapTrap::operator=(s);
    }
    return(*this);
}


void ScavTrap::attack(const std::string& target)
{
     if (this->_points > 0 && this->_energyPoints > 0)
    {
        this->_energyPoints--;
        std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage from the ScavTrap!" << std::endl;   
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}




