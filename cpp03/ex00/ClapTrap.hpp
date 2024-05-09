#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _points;
        int _energyPoints;
        int _attackDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &c);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap&c);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

// std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl);


#endif