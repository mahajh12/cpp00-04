#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap("Scavvy");
    std::cout << "ScavTrap created with name: Scavvy" << std::endl;

    std::cout << "ScavTrap performs an attack:" << std::endl;
    scavTrap.attack("Enemy");

    std::cout << "ScavTrap enters guard gate mode:" << std::endl;
    scavTrap.guardGate();
    std::cout << "End of ScavTrap demonstration." << std::endl;
    return 0;
}