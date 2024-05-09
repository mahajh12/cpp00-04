#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() 
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}