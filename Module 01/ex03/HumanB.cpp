#include "HumanB.hpp"

#define DEFAULT "\033[0m"
#define BOLDCYAN    "\033[1m\033[36m"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if (_type)
	{
		std::cout << BOLDCYAN << _name << " attacks with his " << _type->getType();
		std::cout << DEFAULT << std::endl;
	}
}

void HumanB::setWeapon(Weapon &type)
{
	_type = &type;
}