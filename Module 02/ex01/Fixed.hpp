#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
	int					_fixedPointValue;
	static const int	_fractionBits = 8;
	static const int	_fractionMask = 0xffffffff >> (32 - _fractionBits);
	static const int 	_wholeMask = -1 ^ _fractionMask;

public:
	Fixed(void);
	Fixed(int const x);
	Fixed(float const x);
	Fixed(const Fixed &source);
	~Fixed(void);

	Fixed	&operator=(Fixed const &source);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		getFractionPart(void) const;
	int			getIntegerPart(void) const;

	float		toFloat(void) const;
	int			toInt(void) const;

	int	getValue(void) const;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &source);

#endif