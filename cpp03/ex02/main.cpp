#include "FragTrap.hpp"

int main() 
{
    FragTrap fragTrap("Fraggy");

    std::cout << "Testing high fives:" << std::endl;
    fragTrap.highFivesGuys();

    std::cout << "Testing attack:" << std::endl;
    fragTrap.attack("Enemy Target");

    std::cout << "Testing take damage:" << std::endl;
    fragTrap.takeDamage(20);

    std::cout << "Testing repair:" << std::endl;
    fragTrap.beRepaired(15);

    return 0;
}
