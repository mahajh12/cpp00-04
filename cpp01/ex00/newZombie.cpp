# include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
    //an object is created from a class Zombie
    //create memory dynamically
     Zombie* zombie = new Zombie;
     // Access attributes and set values
     zombie->setName(name);
     return (zombie);
}