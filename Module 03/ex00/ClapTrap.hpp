#pragma once
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

# define DEFAULT "\033[0m"
# define BOLDRED     "\033[1m\033[31m"
# define BOLDGREEN   "\033[1m\033[32m"
# define BOLDYELLOW  "\033[1m\033[33m"
# define BOLDBLUE    "\033[1m\033[34m"
# define BOLDMAGENTA "\033[1m\033[35m"
# define BOLDCYAN    "\033[1m\033[36m"
# define BOLDWHITE   "\033[1m\033[37m"

class ClapTrap
{
private:
	std::string		m_name;
	unsigned int	m_hitpoints;
	unsigned int	m_epoints;
	unsigned int	m_damage;

public:
	ClapTrap(void);
	ClapTrap(std::string const name);
	ClapTrap(const ClapTrap &source);
	~ClapTrap(void);

	ClapTrap		&operator=(const ClapTrap &source);

	void 			attack(std::string const &target);
	void 			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);

	std::string 	get_name(void) const;
	unsigned int	get_hitpoints(void) const;
	unsigned int 	get_epoints(void) const;
	unsigned int 	get_damage(void) const;
	void			set_hitpoints(unsigned int amount);
	void			set_epoints(unsigned int amount);
};

#endif