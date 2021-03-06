#include "Point.hpp"

Fixed sign (Point p1, Point p2, Point p3)
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) && (d2 < 0) && (d3 < 0);
    has_pos = (d1 > 0) && (d2 > 0) && (d3 > 0);

    return has_neg || has_pos;
}

int	main()
{
	Point a(0, 0);
	Point b(1, 0);
	Point c(0, 1);
	Point point1(0.01, 0.01);
	Point point2(-0.01, 0.01);
	Point point3(0, 0);

	std::cout << bsp(a, b, c, point1) << std::endl;
	std::cout << bsp(a, b, c, point2) << std::endl;
	std::cout << bsp(a, b, c, point3) << std::endl;
	return (0);
}