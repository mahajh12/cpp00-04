#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &a);
        Animal &operator=(const Animal&a);
        virtual void makeSound()const;
        std::string getType()const;
};

#endif