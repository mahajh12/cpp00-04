#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
    private:
        std::string name;
        Weapon& weapon; // Reference to a Weapon object
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();
};

#endif