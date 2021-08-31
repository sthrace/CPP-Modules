#include "Zombie.hpp"

int	main()
{
	Zombie* horde = zombieHorde(8, "Fred");
	
	delete[] horde;
	return (0);
}