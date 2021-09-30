#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		m_claptrap_name;
	std::string		m_name;
public:
	DiamondTrap(void);
	DiamondTrap(std::string const name);
	DiamondTrap(const DiamondTrap &source);
	virtual ~DiamondTrap(void);

	DiamondTrap &operator=(const DiamondTrap &source);

	void	whoAmI(void);
};

#endif