#include "Fixed.hpp"

Fixed::Fixed(): fpn(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb): fpn(nb * 256)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb): fpn(roundf(static_cast<float>(nb) * (1 << fractional)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& ob): fpn(ob.fpn)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat( void ) const
{
	float	tofloat;

	tofloat = static_cast<float>(fpn) / (1 << fractional);
	return tofloat;
}

int	Fixed::toInt( void ) const
{
	int	toint;
	toint = (fpn / (1 << fractional));
	return toint;
}

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