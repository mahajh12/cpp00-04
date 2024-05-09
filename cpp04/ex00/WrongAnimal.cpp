#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default") {
    std::cout << "WrongAnimal is created!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal is destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) : type(a.type) {
    std::cout << "Copy constructor called for WrongAnimal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a) {
    std::cout << "Copy assignment operator called for WrongAnimal" << std::endl;
    if (this != &a) {
        type = a.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}