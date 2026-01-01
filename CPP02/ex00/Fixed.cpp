#include "Fixed.hpp"

Fixed::Fixed(): fpn(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy): fpn(cpy.fpn)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called " << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fpn);
}

void Fixed::setRawBits( int const raw)
{
    this->fpn = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ob)
{
    if(this!=&ob){
        setRawBits(ob.getRawBits());
        std::cout << "Copy assignment operator called" << std::endl;
    }
    return *this;
}