#include <iostream>
#include "Fixed.hpp"

int	main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c (Fixed (5) / Fixed(2));
	Fixed const d (Fixed(3) + Fixed(6));
	Fixed const e (Fixed(25.4f) - Fixed(25.2f));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}