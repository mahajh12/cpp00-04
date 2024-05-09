#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Clappy");
    std::cout << "Welcome to the ClapTrap simulator!" << std::endl;
    std::cout << "ClapTrap is attacking a target..." << std::endl;
    claptrap.attack("Enemy");
    std::cout << "ClapTrap is taking damage..." << std::endl;
    claptrap.takeDamage(4);
    std::cout << "ClapTrap is repairing itself..." << std::endl;
    claptrap.beRepaired(5);
    std::cout << "End of ClapTrap simulation." << std::endl;
    return 0;
}
