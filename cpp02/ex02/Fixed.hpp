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
        Fixed &operator=(const Fixed& F);

        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;

        bool operator>(const Fixed& rhs) const;
        bool operator<(const Fixed& rhs) const;
        bool operator>=(const Fixed& rhs) const;
        bool operator<=(const Fixed& rhs) const;
        bool operator==(const Fixed& rhs) const;
        bool operator!=(const Fixed& rhs) const;

        Fixed operator+(const Fixed& rhs) const;
        Fixed operator-(const Fixed& rhs) const;
        Fixed operator*(const Fixed& rhs) const;
        Fixed operator/(const Fixed& rhs) const;

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed);
#endif