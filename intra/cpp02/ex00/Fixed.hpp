#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>


class Fixed
{
    private:
        int fpn;
        static const int fractional;
    public:
        Fixed();
        Fixed(const Fixed &cpy);
        ~Fixed();
        Fixed operator =()
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif