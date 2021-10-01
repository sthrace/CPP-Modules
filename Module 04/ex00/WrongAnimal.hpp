#pragma once
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "header.hpp"

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &source);
	virtual ~WrongAnimal();

	WrongAnimal		&operator=(const WrongAnimal &source);

	void			makeSound(void) const;
	std::string		getType(void) const;
};

#endif