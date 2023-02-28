#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
        int                 RawBits;
        static const int    Bits = 8;
    public :
        Fixed();
        Fixed(const Fixed &_fixed);
        Fixed &operator= (const Fixed &_fixed);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif