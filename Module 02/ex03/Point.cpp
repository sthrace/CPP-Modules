#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::~Point(void)
{
}

Point &Point::operator=(Point const &source)
{
	return (*this);
}

Point::Point(Point const &source) : x(source.x), y(source.y)
{
}

Point::Point(float const x1, float const y1) : x(x1), y(y1)
{
}

Fixed Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}