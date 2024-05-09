#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixedPoint;
        static const int fractionBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &t);
        Fixed(int const num);
        Fixed(float const num);
        Fixed &operator=(const Fixed& F); //ClassType &operator=(const ClassType &other)
        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed);
#endif