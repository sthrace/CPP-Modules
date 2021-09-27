#pragma once
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	Fixed const x;
	Fixed const y;

public:
	Point(void);
	~Point(void);
	Point(const Point &source);
	Point(float const x1, float const y1);
	Point &operator=(Point const &source);
	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif