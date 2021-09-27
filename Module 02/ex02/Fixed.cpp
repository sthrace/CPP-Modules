#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0)
{
}

Fixed::Fixed(const Fixed &source)
{
	*this = source;
}

Fixed::Fixed(int const x) : _fixedPointValue(x << _fractionBits)
{
}

Fixed::Fixed(float const x) : _fixedPointValue(roundf(x * (float)(1 << _fractionBits)))
{
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &source)
{
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
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
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
	Fixed	res;
	int		ress;

	res.setRawBits((long long)getRawBits() * (long long)source.getRawBits() >> _fractionBits);
	return (res);
}

Fixed		Fixed::operator/(Fixed const &source)
{
	Fixed	res;

	res.setRawBits(getRawBits() * (1 << _fractionBits) / source.getRawBits());
	return (res);
}

Fixed		Fixed::operator++(int nb)
{
	Fixed temp(*this);

	_fixedPointValue++;
	return(temp);
}

Fixed		Fixed::operator--(int nb)
{
	Fixed temp(*this);

	_fixedPointValue--;
	return(temp);
}

Fixed		Fixed::operator++()
{
	_fixedPointValue++;
	return (*this);
}

Fixed		Fixed::operator--()
{
	_fixedPointValue--;
	return (*this);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	return (first < second ? first : second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	return (first > second ? first : second);
}

Fixed	const &Fixed::min(Fixed const &first, Fixed const &second)
{
	return (first < second ? first : second);
}

Fixed	const &Fixed::max(Fixed const &first, Fixed const &second)
{
	return (first > second ? first : second);
}