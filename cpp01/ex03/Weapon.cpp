#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) 
{
    return;
}

Weapon::~Weapon(void)
{
    std::cout << "destroy: " << this->type  << std:: endl;
    return;
}

std::string Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string const type)
{
    this->type = type;
    return;
}