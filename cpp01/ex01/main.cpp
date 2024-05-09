#include <iostream>
#include "Zombie.hpp"
int main()
{
    Zombie* myZombie = zombieHorde(2,"Samantha");
    delete[] myZombie;

    return (0);
}