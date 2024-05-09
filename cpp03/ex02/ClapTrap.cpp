#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _points(10), _energyPoints(10), _attackDamage(0)
{
    this->_name = name;
    std::cout << "ClapTrap " + _name + " was created!" << std::endl;
    return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " + this->_name + " is destroyed!" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &c)
    {
        this->_name = c._name;
        this->_points = c._points;
        this->_energyPoints = c._energyPoints;
        this->_attackDamage = c._attackDamage;
    }
    return(*this);
}


void ClapTrap::attack(const std::string& target)
{
     if (this->_points > 0 && this->_energyPoints > 0)
    {
        this->_energyPoints--;
        std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;   
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_points > 0)
    {
        this->_points -= amount;
        if (this->_points < 0)
            this->_points = 0;
        std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_points > 0 && this->_energyPoints > 0)
    {
        this->_energyPoints--;
        this->_points = this->_points + amount;
        std::cout << this->_name << " repairs itself, recovering " << amount << " points!" << std::endl;
    }
    
}