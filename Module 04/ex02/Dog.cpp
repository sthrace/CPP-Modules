#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	brain = new Brain();
	std::cout << BOLDCYAN << "New Dog is born\n" << DEFAULT;
}

Dog::Dog(const Dog &source)
{
	brain = new Brain(*source.brain);
	type = source.type;
	std::cout << BOLDCYAN << "Dog has been cloned\n" << DEFAULT;
}

Dog::~Dog(void)
{
	if (brain)
		delete brain;
	std::cout <<BOLDRED << "Dog died\n" << DEFAULT;
}

Dog &Dog::operator=(const Dog &source)
{
	if (this == &source)
		return *this;
	*brain = *source.brain;
	type = source.type;
	std::cout << BOLDCYAN << "Dog has been copied\n" << DEFAULT;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << BOLDWHITE << "Woof Woof\n" << DEFAULT;
}