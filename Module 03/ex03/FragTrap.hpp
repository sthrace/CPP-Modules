#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string const name);
	FragTrap(const FragTrap &source);
	FragTrap(std::string const name, uint hp, uint ep, uint dmg);
	virtual ~FragTrap(void);

	FragTrap &operator=(const FragTrap &source);

	void	highFivesGuys(void);
};

#endif