#include "Fixed.hpp"

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
	value = val << fractionBits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(val * (1 << fractionBits));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &fp)
{
	std::cout << "Assignation operator called" << std::endl;
	value = fp.getRawBits();
	return (*this);
}

float Fixed::toFloat(void) const
{
	return (((float)(value) / (1 << fractionBits)));
}

int Fixed::toInt(void) const
{
	return ((int)(value >> fractionBits));
}

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed)
{
	stream << fixed.toFloat();
	return stream;
}
