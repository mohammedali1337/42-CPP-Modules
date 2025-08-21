#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fpn = 0;
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    fpn = cpy.fpn;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

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

Fixed Fixed::operator=(const Fixed &ob)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(ob.getRawBits());
    return *this;
}