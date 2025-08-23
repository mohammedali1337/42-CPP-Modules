#include "Fixed.hpp"

Fixed::Fixed()
{
    fpn = 0;
}

Fixed::Fixed(const int nb)
{
    this->fpn = nb * 256;
}

Fixed::Fixed(const float nb)
{
    this->fpn = roundf((float)nb * (1 << fractional));
}

Fixed::Fixed(const Fixed& ob)
{
    this->fpn = ob.fpn;
}

Fixed::~Fixed()
{

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












// operator overloading
Fixed Fixed::operator++ ()
{
    float nb = this->toFloat();
    nb += 0.00390625;
    Fixed newob(nb);

    return newob;
}

Fixed Fixed::operator++ (int)
{
    float nb = this->toFloat();
    nb += 0.00390625;
    Fixed newob(nb);
    
    return newob;
}


Fixed &Fixed::operator= (const Fixed& ob)
{
    if (this != &ob)
        this->fpn = ob.fpn;

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& ob) {
    os << ob.toFloat();
    return os;
}