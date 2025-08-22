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
    this->fpn = (float)nb * 256;
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
}

float Fixed::toFloat( void ) const
{
    float tofloat;
    
    tofloat = fpn / 256;
    return tofloat;
}

int Fixed::toInt( void ) const
{
    int toint;
    
    toint = fpn / 256;
    return toint;
}

float Fixed::operator<< (const Fixed& ob)
{
    return (ob.getRawBits());
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