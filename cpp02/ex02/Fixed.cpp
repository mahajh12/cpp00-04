#include "Fixed.hpp"

Fixed::Fixed()
{
    fixedPoint = 0;
}

Fixed::~Fixed()
{
    return;
}

Fixed::Fixed(const Fixed &t)
{
    *this= t;
}

Fixed::Fixed(int const num)
{
    this->fixedPoint = num << fractionBits;
}

Fixed::Fixed(float const num)
{
    this->fixedPoint = roundf(num * (1 << fractionBits));
}

Fixed &Fixed::operator=(const Fixed &F)
{
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

bool Fixed::operator>(const Fixed& rhs) const
{
    return this->fixedPoint > rhs.fixedPoint;
}

bool Fixed::operator<(const Fixed& rhs) const
{
    return this->fixedPoint < rhs.fixedPoint;
}

bool Fixed::operator>=(const Fixed& rhs) const
{
    return this->fixedPoint >= rhs.fixedPoint;
}

bool Fixed::operator<=(const Fixed& rhs) const
{
    return this->fixedPoint <= rhs.fixedPoint;
}

bool Fixed::operator==(const Fixed& rhs) const
{
    return this->fixedPoint == rhs.fixedPoint;
}

bool Fixed::operator!=(const Fixed& rhs) const
{
    return this->fixedPoint != rhs.fixedPoint;
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
    if (rhs.toFloat() == 0.0f)
    {
        std::cerr << "Error: Division by zero" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++()
{
    this->fixedPoint++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--()
{
    this->fixedPoint--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    else
        return b;
}