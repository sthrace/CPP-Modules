#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	nameless;
	ClapTrap	sthrace("sthrace");
	ClapTrap	clone(sthrace);

	nameless.attack("Enemy");
	clone.attack("Someone");
	sthrace.attack("Friend");
	sthrace.takeDamage(2);
	sthrace.takeDamage(9);
	sthrace.beRepaired(1);
	sthrace.beRepaired(100);

	return (0);
}