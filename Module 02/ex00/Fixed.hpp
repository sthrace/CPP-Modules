#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	int					_value;
	static const int	_bits = 8;

public:
	Fixed(void);
	Fixed(const Fixed &source);
	~Fixed(void);

	Fixed	&operator=(Fixed const &source);

	int			getRawBits(void) const;
	void		setRawBits(int const value);
};

#endif