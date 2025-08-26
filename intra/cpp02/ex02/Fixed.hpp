#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        

        float toFloat( void ) const;
        int   toInt( void ) const;

        // compareson operator 

        bool operator < (const Fixed &ob2);
        bool operator > (const Fixed &ob2);
        bool operator <= (const Fixed &ob2);
        bool operator >= (const Fixed &ob2);

        bool operator == (const Fixed &ob2);
        bool operator != (const Fixed &ob2);


        // arithmetic operator 

        Fixed operator+ (const Fixed &ob2);
        Fixed operator- (const Fixed &ob2);
        Fixed operator* (const Fixed &ob2);
        Fixed operator/ (const Fixed &ob2);

        //increment and decrement operator

        Fixed operator++ ();
        Fixed operator++ (int);
        Fixed operator-- ();
        Fixed operator-- (int);

        // public overloaded member functions 

        static Fixed &min(Fixed &ob1, Fixed &ob2);
        static Fixed &max(Fixed &ob1, Fixed &ob2);
        static const Fixed &min(const Fixed &ob1,const Fixed &ob2);
        static const Fixed &max(const Fixed &ob1,const Fixed &ob2);


};
std::ostream &operator<< (std::ostream& os, const Fixed& ob);

#endif 