#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	FragTrap	nameless;
	FragTrap	sthrace("sthrace");
	FragTrap	clone(sthrace);
	ScavTrap	serena("serena");

	nameless.attack("Enemy");
	sthrace.attack("Friend");
	sthrace.attack("Friend");
	sthrace.attack("Friend");
	sthrace.takeDamage(2);
	sthrace.takeDamage(9);
	sthrace.beRepaired(1);
	sthrace.beRepaired(100);
	sthrace.highFivesGuys();
	clone.highFivesGuys();
	nameless.highFivesGuys();

	return (0);
}