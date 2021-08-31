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
	~Zombie(void);
	void	announce(void);
private:
	std::string _name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif