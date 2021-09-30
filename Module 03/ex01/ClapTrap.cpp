#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : m_name("NoName"), m_hitpoints(0), m_epoints(0), m_damage(0)
{
	std::cout << "A NoName ClapTrap has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : m_name(name), m_hitpoints(10), m_epoints(10), m_damage(0)
{
	std::cout << "ClapTrap " << m_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string const name, uint hp, uint ep, uint dmg) : m_name(name), m_hitpoints(hp), m_epoints(ep), m_damage(dmg)
{
	std::cout << "ClapTrap " << m_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	*this = source;
	std::cout << "ClapTrap " << source.m_name << " has been cloned" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << m_name << " died" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source)
{
	m_name = source.m_name;
	m_damage = source.m_damage;
	m_epoints = source.m_epoints;
	m_hitpoints = source.m_hitpoints;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (m_epoints - m_damage)
		std::cout << target << " attacked by " << m_name << "\nEnergy left is: " << m_epoints << "\n";
	else
		std::cout << "ClapTrap " << m_name << " is too tired to attack\n";
	if (m_epoints < m_damage)
		set_epoints(0);
	else
		set_epoints(m_epoints - m_damage);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitpoints < amount)
		set_hitpoints(0);
	else
		set_hitpoints(m_hitpoints - amount);
	std::cout << "ClapTrap " << m_name << " takes " << amount << " damage, Hitpoints available: " << m_hitpoints << "\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	set_hitpoints(m_hitpoints + amount);
	std::cout << "ClapTrap " << m_name << " heals " << amount << " hitpoints, Hitpoints available: " << m_hitpoints << "\n"; 
}

std::string 	ClapTrap::get_name(void) const
{
	return (m_name);
}

unsigned int	ClapTrap::get_hitpoints(void) const
{
	return (m_hitpoints);
}

unsigned int 	ClapTrap::get_epoints(void) const
{
	return (m_epoints);
}

unsigned int 	ClapTrap::get_damage(void) const
{
	return (m_damage);
}

void			ClapTrap::set_hitpoints(unsigned int amount)
{
	m_hitpoints = amount;
}

void			ClapTrap::set_epoints(unsigned int amount)
{
	m_epoints = amount;
}