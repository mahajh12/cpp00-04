#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &s);
        FragTrap &operator=(const FragTrap &s);

        void highFivesGuys(void);
};

#endif