#pragma once
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string const name);
	ScavTrap(const ScavTrap &source);
	virtual ~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &source);

	void 	attack(std::string const &target);
	void	guardGate(void);
};

#endif