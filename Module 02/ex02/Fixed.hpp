#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

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

	Fixed	operator++(int nb);
	Fixed	operator--(int nb);
	Fixed	operator++();
	Fixed	operator--();

	int			getRawBits(void) const;
	void		setRawBits(int const raw);

	float		toFloat(void) const;
	int			toInt(void) const;

	static Fixed	&min(Fixed &first, Fixed &second);
	static Fixed	&max(Fixed &first, Fixed &second);
	static Fixed	const &min(Fixed const &first, Fixed const &second);
	static Fixed	const &max(Fixed const &first, Fixed const &second);

	int	getValue(void) const;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &source);

#endif