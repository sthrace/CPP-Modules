#pragma once
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(const Cat &source);
	~Cat();

	Cat		&operator=(const Cat &source);
	void 	makeSound() const;
};

#endif