#include "HumanA.hpp"

#define DEFAULT "\033[0m"
#define BOLDMAGENTA "\033[1m\033[35m"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(type)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << BOLDMAGENTA << _name << " attacks with his " << _type.getType();
	std::cout << DEFAULT << std::endl;
}