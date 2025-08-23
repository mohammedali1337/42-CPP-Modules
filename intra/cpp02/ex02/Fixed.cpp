#include "Fixed.hpp"

Fixed::Fixed()
{
    fpn = 0;
}

Fixed::Fixed(const Fixed& ob)
{
    this->fpn = ob.fpn;
}

Fixed::~Fixed()
{

}

Fixed &Fixed::operator= (const Fixed& ob)
{
    if (this != &ob)
        this->fpn = ob.fpn;

    return *this;
}

Fixed::Fixed(const int nb)
{
    this->fpn = nb * 256;
}

Fixed::Fixed(const float nb)
{
    this->fpn = roundf((float)nb * (1 << fractional));
}


Fixed Fixed::operator++ ()
{
    float nb = this->toFloat();
    nb += 0.00390625;
    fpn = (int )(nb * (1 << 256));
}







float Fixed::toFloat( void ) const
{
    float tofloat;

    tofloat = (float)fpn / (1 << fractional);
    return tofloat;
}

int Fixed::toInt( void ) const
{
    int toint;
    toint = (fpn / (1 << fractional));
    return toint;
}
