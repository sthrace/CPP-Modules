#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "header.hpp"
# include "Brain.hpp"

class Animal
{

protected:
	std::string	type;

public:
	Animal(void);
	Animal(const Animal &source);
	virtual ~Animal();

	Animal			&operator=(const Animal &source);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif