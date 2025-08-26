#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fpn = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    this->fpn = nb * 256;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb)
{
    this->fpn = roundf((float)nb * (1 << fractional));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& ob)
{
    this->fpn = ob.fpn;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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
    std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits( int const raw)
{
    this->fpn = raw;
    std::cout << "setRawBits member function called" << std::endl;
}













// operator overloadig 

Fixed& Fixed::operator=(const Fixed& ob)
{
    if (this != &ob)
        this->fpn = ob.fpn;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Fixed& ob) {
    os << ob.toFloat();
    return os;
}