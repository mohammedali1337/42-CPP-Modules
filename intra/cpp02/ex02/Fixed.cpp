#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fpn = 0;
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

//encapsulation 
int Fixed::getRawBits( void ) const
{
    return (this->fpn);
}

void Fixed::setRawBits( int const raw)
{
    this->fpn = raw;
}

// operator overloadig 

Fixed& Fixed::operator=(const Fixed& ob)
{
    if (this != &ob)
        this->fpn = ob.fpn;
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Fixed& ob) {
    os << ob.toFloat();
    return os;
}

// comparison operator 

bool Fixed::operator < (const Fixed &ob2)
{
    if (this->fpn < ob2.fpn)
        return 1;
    return 0;
}

bool Fixed::operator > (const Fixed &ob2)
{
    if (this->fpn > ob2.fpn)
        return 1;
    return 0;
}

bool Fixed::operator <= (const Fixed &ob2)
{
    if (this->fpn <= ob2.fpn)
        return 1;
    return 0;
}

bool Fixed::operator >= (const Fixed &ob2)
{
    if (this->fpn >= ob2.fpn)
        return 1;
    return 0;
}


bool Fixed::operator == (const Fixed &ob2)
{
    if (this->fpn == ob2.fpn)
        return 1;
    return 0;
}


bool Fixed::operator != (const Fixed &ob2)
{
    if (this->fpn != ob2.fpn)
        return 1;
    return 0;
}


// arithmetic operator 

Fixed Fixed::operator+ (const Fixed &ob2)
{
    Fixed newob;
    newob.fpn = this->fpn + ob2.fpn;
    return newob;
}

Fixed Fixed::operator- (const Fixed &ob2)
{
    Fixed newob;
    newob.fpn = this->fpn - ob2.fpn;
    return newob;
}

Fixed Fixed::operator* (const Fixed &ob2)
{
    Fixed newob;
    newob.fpn = (this->fpn * ob2.fpn) / (1 << fractional);
    return newob;
}

Fixed Fixed::operator/ (const Fixed &ob2)
{
    Fixed newob;
    newob.fpn = (this->fpn / ob2.fpn) * (1 << fractional);
    return newob;
}

// increment / decrement operator 

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

// --operator 
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


// member function 

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
