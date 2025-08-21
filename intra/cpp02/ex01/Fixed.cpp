#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->fpn = nb;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;

}

Fixed::Fixed(const Fixed& ob)
{

}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& ob)
{
    if (this != &ob)
        
    std::cout << "Copy assignment operator called" << std::endl;
}

float Fixed::toFloat( void ) const
{

}

int Fixed::toInt( void ) const
{

}