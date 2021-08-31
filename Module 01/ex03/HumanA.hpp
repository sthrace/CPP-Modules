#pragma once
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &type);
	~HumanA(void);
	void attack();
private:
	Weapon		&_type;
	std::string _name;
};

#endif