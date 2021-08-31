#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define DEFAULT "\033[0m"
# define BOLDRED     "\033[1m\033[31m"
# define BOLDGREEN   "\033[1m\033[32m"

# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string name);
private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif