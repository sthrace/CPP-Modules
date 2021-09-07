#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>

class Fixed
{
	int					_value;
	static const int	_bits = 8;

public:
	Fixed(void);
	Fixed(int const x);
	Fixed(float const x);
	Fixed(const Fixed &source);
	~Fixed(void);

	Fixed	&operator=(Fixed const &source);
	Fixed	&operator<<(Fixed const &source);

	int			getRawBits(void) const;
	void		setRawBits(int const value);

	float		toFloat(void) const;
	int			toInt(void) const;
};

#endif