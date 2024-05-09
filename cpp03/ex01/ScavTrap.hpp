#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &s);
        ScavTrap &operator=(const ScavTrap &s);

        void guardGate();
        void attack(const std::string& target);
};

#endif