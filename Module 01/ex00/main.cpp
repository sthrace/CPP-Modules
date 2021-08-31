#include "Zombie.hpp"

int	main()
{
	Zombie fred("Fred");
	Zombie *stanley = newZombie("Stanley");
	
	randomChump("Elsa");
	fred.announce();
	stanley->announce();
	delete stanley;
	return (0);
}