#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	m_claptrap_name = ClapTrap::m_name.append("_clap_name");
	m_name = "NoName";
	std::cout << BOLDMAGENTA << "A nameless DiamondTrap has been created" << DEFAULT << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(name), FragTrap(name)
{
	m_claptrap_name = ClapTrap::m_name;
	m_name = name;
	std::cout << BOLDMAGENTA << "DiamondTrap " << m_name << " has been created" << DEFAULT << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &source)
{
	*this = source;
	std::cout << "DiamondTrap " << source.m_name << " has been cloned" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << BOLDRED << "DiamondTrap " << m_name << " died" << DEFAULT << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &source)
{
	m_name = source.m_name;
	m_damage = source.m_damage;
	m_epoints = source.m_epoints;
	m_hitpoints = source.m_hitpoints;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << BOLDBLUE;
	std::cout << "\n\n";
	std::cout << "I am a DiamondTrap " << m_name << "\n";
	std::cout << "My ClapTrap name is: " << m_claptrap_name << "\n";
	std::cout << "\n\n";
	std::cout << DEFAULT;
}
