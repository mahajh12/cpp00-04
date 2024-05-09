#include <iostream>
#include "Zombie.hpp"

/*constructor code that will be executed when 
our class is instanciated */
Zombie::Zombie(void) {
    //  std::cout << "created: " << this->name  << std:: endl;
    return;
}

Zombie::~Zombie(void) {
    std::cout << "destroy: " << this->name  << std:: endl;
    return;
}

void Zombie::setName(std::string name) {
    //explicitly accesses the member variable name of the current object.
    this->name = name;
    return;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std:: endl;
    return;
}