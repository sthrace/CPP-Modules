#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

// _fixedPointValue >>= 1; divide _fPV by 2^1;
// _fixedPointValue <<= 1; multiply _fPV by 2^1;

class Fixed
{
	int					_fixedPointValue;
	static const int	_fractionBits = 8;

public:
	Fixed(void);
	Fixed(int const x);
	Fixed(float const x);
	Fixed(const Fixed &source);
	~Fixed(void);

	Fixed	&operator=(Fixed const &source);

	bool	operator>(Fixed const &source) const;
	bool	operator<(Fixed const &source) const;
	bool	operator>=(Fixed const &source) const;
	bool	operator<=(Fixed const &source) const;
	bool	operator==(Fixed const &source) const;
	bool	operator!=(Fixed const &source) const;

	Fixed	operator+(Fixed const &source);
	Fixed	operator-(Fixed const &source);
	Fixed	operator*(Fixed const &source);
	Fixed	operator/(Fixed const &source);

	int		&operator++(int);
	int		&operator--(int);
	int		&operator++();
	int		&operator--();

	int			getRawBits(void) const;
	void		setRawBits(int const raw);

	float		toFloat(void) const;
	int			toInt(void) const;

	static int	&min(int &first, int &second);
	static int	&max(int &first, int &second);

	int	getValue(void) const;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &source);





#endif