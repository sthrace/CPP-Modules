#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(const Fixed &source)
{
	_value = source._value;
}

Fixed::Fixed(int const x) : _value(x << Fixed::_bits)
{
}

Fixed::Fixed(float const x) : _value(roundf(x * (1 << Fixed::_bits)))
{
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &source)
{
	_value = source._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const value)
{
	_value = value;
}