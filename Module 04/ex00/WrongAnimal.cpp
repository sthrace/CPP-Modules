#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << BOLDYELLOW << "New WrongAnimal is born\n" << DEFAULT;
}

WrongAnimal::WrongAnimal(const WrongAnimal &source)
{
	*this = source;
	std::cout << BOLDYELLOW << "WrongAnimal has been cloned\n" << DEFAULT;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << BOLDRED << "WrongAnimal died\n" << DEFAULT;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &source)
{
	type = source.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << BOLDWHITE << "Wrong AAAAAaaaaa\n" << DEFAULT;
}