#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << BOLDRED << _name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << BOLDGREEN;
	std::cout << "<" << _name << ">" << " BraiiiiiiinnnzzzZ...";
	std::cout << DEFAULT << std::endl;
}