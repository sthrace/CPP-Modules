#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	sthrace("sthrace");

	std::cout << BOLDGREEN;
	std::cout << "Hitpoints: " << sthrace.FragTrap::get_hitpoints() << std::endl;
	std::cout << "Energy points: " << sthrace.ScavTrap::get_epoints() << std::endl;
	std::cout << "Attack Damage: " << sthrace.FragTrap::get_damage() << std::endl;
	std::cout << "Attack: " << sthrace.ScavTrap::get_damage() << std::endl;
	std::cout << DEFAULT;
	sthrace.guardGate();
	sthrace.highFivesGuys();
	sthrace.whoAmI();

	return (0);
}