#include "Fixed.hpp"

Fixed::Fixed(): fpn(0){}


Fixed::Fixed(const int nb): fpn(nb * 256){}

Fixed::Fixed(const float nb): fpn(roundf((float)nb * (1 << fractional))){}

Fixed::Fixed(const Fixed& ob): fpn(ob.fpn){}

Fixed::~Fixed(){}

float Fixed::toFloat( void ) const
{
    float   tofloat;

    tofloat = (float)fpn / (1 << fractional);
    return tofloat;
}

int Fixed::toInt( void ) const
{
    int toint;

    toint = (fpn / (1 << fractional));
    return toint;
}

int Fixed::getRawBits( void ) const
{
    return (this->fpn);
}

void Fixed::setRawBits( int const raw)
{
    this->fpn = raw;
}

Fixed& Fixed::operator=(const Fixed& ob)
{
    if (this != &ob)
        this->fpn = ob.fpn;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& ob)
{
    os << ob.toFloat();
    return os;
}

bool Fixed::operator < (const Fixed &ob2) const
{
    if (this->fpn < ob2.fpn)
        return 1;
    return 0;
}

bool Fixed::operator > (const Fixed &ob2) const
{
    if (this->fpn > ob2.fpn)
        return 1;
    return 0;
}

bool Fixed::operator <= (const Fixed &ob2) const
{
    if (this->fpn <= ob2.fpn)
        return 1;
    return 0;
}

bool Fixed::operator >= (const Fixed &ob2) const
{
    if (this->fpn >= ob2.fpn)
        return 1;
    return 0;
}


bool Fixed::operator == (const Fixed &ob2) const
{
    if (this->fpn == ob2.fpn)
        return 1;
    return 0;
}


bool Fixed::operator != (const Fixed &ob2) const
{
    if (this->fpn != ob2.fpn)
        return 1;
    return 0;
}

Fixed Fixed::operator+ (const Fixed &ob2) const
{
    Fixed newob;
    newob.fpn = this->fpn + ob2.fpn;
    return newob;
}

Fixed Fixed::operator- (const Fixed &ob2) const
{
    Fixed newob;
    newob.fpn = this->fpn - ob2.fpn;
    return newob;
}

Fixed Fixed::operator* (const Fixed &ob2) const
{
    Fixed newob;
    newob.fpn = (this->fpn * ob2.fpn) / (1 << fractional);
    return newob;
}

Fixed Fixed::operator/ (const Fixed &ob2) const
{
    Fixed newob;
    newob.fpn = (this->fpn / ob2.fpn) * (1 << fractional);
    return newob;
}

Fixed Fixed::operator++ ()
{
    Fixed tmp;
    fpn+=1;
    tmp.fpn = fpn;
    return tmp ;
}

Fixed Fixed::operator++ (int)
{
    Fixed tmp;
    tmp.fpn = fpn;
    fpn+=1;
    return tmp ;
}

Fixed Fixed::operator-- ()
{
    Fixed tmp;
    fpn-=1;
    tmp.fpn = fpn;
    return tmp ;
}

Fixed Fixed::operator-- (int)
{
    Fixed tmp;
    tmp.fpn = fpn;
    fpn-=1;
    return tmp ;
}

Fixed& Fixed::min(Fixed &ob1, Fixed &ob2)
{
    if (ob1.fpn > ob2.fpn)
        return ob2;
    else 
        return ob1;
}

Fixed& Fixed::max(Fixed &ob1, Fixed &ob2)
{
    if (ob1.fpn < ob2.fpn)
        return ob2;
    else 
        return ob1;
}

const Fixed& Fixed::min(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1.fpn > ob2.fpn)
        return ob2;
    else 
        return ob1;
}

const Fixed& Fixed::max(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1.fpn < ob2.fpn)
        return ob2;
    else 
        return ob1;
}