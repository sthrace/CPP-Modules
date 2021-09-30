#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	nameless;
	ScavTrap	sthrace("sthrace");
	ScavTrap	clone(sthrace);

	nameless.attack("Enemy");
	sthrace.attack("Friend");
	sthrace.attack("Friend");
	sthrace.attack("Friend");
	sthrace.takeDamage(2);
	sthrace.takeDamage(9);
	sthrace.beRepaired(1);
	sthrace.beRepaired(100);
	sthrace.guardGate();
	clone.guardGate();
	nameless.guardGate();

	return (0);
}