#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &a);
        WrongAnimal &operator=(const WrongAnimal &a);

        void makeSound() const;
        std::string getType() const;
};

#endif