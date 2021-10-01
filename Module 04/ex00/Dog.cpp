#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << BOLDCYAN << "New Dog is born\n" << DEFAULT;
}

Dog::Dog(const Dog &source)
{
	*this = source;
	std::cout << BOLDCYAN << "Dog has been cloned\n" << DEFAULT;
}

Dog::~Dog(void)
{
	std::cout <<BOLDRED << "Dog died\n" << DEFAULT;
}

Dog &Dog::operator=(const Dog &source)
{
	type = source.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << BOLDWHITE << "Woof Woof\n" << DEFAULT;
}