#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &t)
{
    std::cout << "Copy constructor called" << std::endl;
    *this= t;
}

Fixed::Fixed(int const num)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = num << fractionBits;
}

Fixed::Fixed(float const num)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = roundf(num * (1 << fractionBits));
}

/*copy the value from one object to another existing object*/
Fixed &Fixed::operator=(const Fixed &F)
{
     std::cout << "Copy assignment operator called" << std::endl;
    if (this != &F)
        this->fixedPoint = F.fixedPoint;
    return *this;
}

int Fixed::getRawBits() const
{
    return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}

float Fixed::toFloat() const
{
    return ((float)fixedPoint / (1 << fractionBits));
}

int Fixed::toInt() const
{
    return ((int)(roundf((float)fixedPoint / (1 << fractionBits))));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}