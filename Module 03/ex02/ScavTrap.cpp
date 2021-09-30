#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "A NoName ScavTrap has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << m_name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source)
{
	*this = source;
	std::cout << "ScavTrap " << source.m_name << " has been cloned" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << m_name << " died" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &source)
{
	m_name = source.m_name;
	m_damage = source.m_damage;
	m_epoints = source.m_epoints;
	m_hitpoints = source.m_hitpoints;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (m_epoints > m_damage)
		std::cout << target << " attacked by " << m_name << "\nEnergy left is: " << m_epoints - m_damage << "\n";
	else
		std::cout << "ScavTrap " << m_name << " is too tired to attack\n";
	if (m_epoints < m_damage)
		set_epoints(0);
	else
		set_epoints(m_epoints - m_damage);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << m_name << " has entered in GateKeeper mode\n";
}