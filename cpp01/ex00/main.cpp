#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie* myZombie = newZombie("Samantha");
    delete myZombie;
    randomChump("richtofen");
    return (0);
}