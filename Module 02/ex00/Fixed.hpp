#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	int					_fixedPointValue;
	static const int	_fractionBits = 8;

public:
	Fixed(void);
	Fixed(const Fixed &source);
	~Fixed(void);

	Fixed	&operator=(Fixed const &source);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
};

#endif