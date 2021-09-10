#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::Fixed(int const x) : _fixedPointValue(x << _fractionBits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const x) : _fixedPointValue(roundf(x * (float)(1 << _fractionBits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source)
{
	// std::cout << "Assignation operator called" << std::endl;
	_fixedPointValue = source._fixedPointValue;
	return (*this);
}

std::ostream &operator<<(std::ostream &output, const Fixed &source)
{
	output << source.toFloat();
	return (output);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (float)(1 << _fractionBits));
}

int		Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractionBits);
}

bool	Fixed::operator>(Fixed const &source) const
{
	return (getRawBits() > source.getRawBits());
}
	
bool	Fixed::operator<(Fixed const &source) const
{
	return (getRawBits() < source.getRawBits());
}

bool	Fixed::operator>=(Fixed const &source) const
{
	return (getRawBits() >= source.getRawBits());
}

bool	Fixed::operator<=(Fixed const &source) const
{
	return (getRawBits() <= source.getRawBits());
}

bool	Fixed::operator==(Fixed const &source) const
{
	return (getRawBits() == source.getRawBits());
}

bool	Fixed::operator!=(Fixed const &source) const
{
	return (getRawBits() != source.getRawBits());
}

Fixed		Fixed::operator+(Fixed const &source)
{
	Fixed	res;

	res.setRawBits(getRawBits() + source.getRawBits());
	return (res);
}

Fixed		Fixed::operator-(Fixed const &source)
{
	Fixed	res;

	res.setRawBits(getRawBits() - source.getRawBits());
	return (res);
}

Fixed		Fixed::operator*(Fixed const &source)
{
	Fixed	res(*this);
	int		value1, value2, mult;

	mult = (((getRawBits() >> _fractionBits) * (source.getRawBits() >> _fractionBits)) >> 0);
	res.setRawBits(mult);
	return (res);
}

Fixed		Fixed::operator/(Fixed const &source)
{
	Fixed	res(*this);
	int		value1, value2, mult;

	mult = (((int64_t)getRawBits() >> _fractionBits / (int64_t)source.getRawBits() >> _fractionBits) << _fractionBits);
	res.setRawBits(mult);
	return (res);
}