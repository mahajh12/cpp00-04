# include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name )
{
    //an object is created from a class Zombie
     Zombie zombie;
     // Access attributes and set values
     zombie.setName(name);
     zombie.announce();
     return;
}