#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << BOLDCYAN << "New Animal is born\n" << DEFAULT;
}

Animal::Animal(const Animal &source)
{
	*this = source;
	std::cout << BOLDCYAN << "Animal has been cloned\n" << DEFAULT;
}

Animal::~Animal()
{
	std::cout <<BOLDRED << "Animal died\n" << DEFAULT;
}

Animal &Animal::operator=(const Animal &source)
{
	type = source.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return type;
}

void	Animal::makeSound(void) const
{
	std::cout << BOLDWHITE << "AAAAAaaaaa\n" << DEFAULT;
}