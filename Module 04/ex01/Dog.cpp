#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	brain = new Brain();
	std::cout << BOLDCYAN << "New Dog is born\n" << DEFAULT;
}

Dog::Dog(const Dog &source)
{
	brain = new Brain();
	*brain = *source.brain;
	type = source.type;
	std::cout << BOLDCYAN << "Dog has been cloned\n" << DEFAULT;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout <<BOLDRED << "Dog died\n" << DEFAULT;
}

Dog &Dog::operator=(const Dog &source)
{
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *source.brain;
	type = source.type;
	return (*this);
	std::cout << BOLDCYAN << "Dog has been copied\n" << DEFAULT;
}

void	Dog::makeSound(void) const
{
	std::cout << BOLDWHITE << "Woof Woof\n" << DEFAULT;
}