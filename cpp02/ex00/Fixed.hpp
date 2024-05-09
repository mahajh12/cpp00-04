#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixedPoint;
        static const int fractionBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &t);
        ~Fixed();
        Fixed &operator=(const Fixed&fixed);
       
        int getRawBits() const;
        void setRawBits(const int raw) ;
    
};

#endif