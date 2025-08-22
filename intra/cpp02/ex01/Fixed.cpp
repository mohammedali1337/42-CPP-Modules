#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fpn = 0;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->fpn = nb * 256;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->fpn = roundf((float)nb * (1 << fractional));
}

Fixed::Fixed(const Fixed& ob)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fpn = ob.fpn;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& ob)
{
    if (this != &ob)
        this->fpn = ob.fpn;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
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

std::ostream& operator<<(std::ostream& os, const Fixed& ob) {
    os << ob.toFloat();
    return os;
}


//encapsulation 
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fpn);
}

void Fixed::setRawBits( int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fpn = raw;
}