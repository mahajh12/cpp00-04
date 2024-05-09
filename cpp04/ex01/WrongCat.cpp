#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat is created!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat is destroyed!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c) : WrongAnimal(c) {
    std::cout << "Copy constructor called for WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &c) {
    WrongAnimal::operator=(c);
    std::cout << "Copy assignment operator called for WrongCat" << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Meow! (But it's a WrongCat)" << std::endl;
}