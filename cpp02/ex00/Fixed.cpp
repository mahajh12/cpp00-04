#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

/*initialize new object as a copy of existing object.*/
Fixed::Fixed(const Fixed &t)
{
    std::cout << "Copy constructor called" << std::endl;
    // this->fixedPoint= t.fixedPoint;
    *this= t;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/*copy the value from one object to another existing object*/
Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->fixedPoint = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

void Fixed::setRawBits(const int raw)
{

    this->fixedPoint = raw;
}