
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
    private:
        int fpn;
        static const int fractional = 8;
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed& ob);
        ~Fixed();
        Fixed &operator=(const Fixed& ob);
        float operator<<(const Fixed& ob);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        

        // member fonction 
        float toFloat( void ) const;
        int   toInt( void ) const;
};

#endif 