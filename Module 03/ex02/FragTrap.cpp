#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "A NoName FragTrap has been created" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << m_name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &source)
{
	*this = source;
	std::cout << "FragTrap " << source.m_name << " has been cloned" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << m_name << " died" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &source)
{
	m_name = source.m_name;
	m_damage = source.m_damage;
	m_epoints = source.m_epoints;
	m_hitpoints = source.m_hitpoints;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << m_name << " is raising up all Fives High\n";
}