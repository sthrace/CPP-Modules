#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << BOLDCYAN << "New Cat is born\n" << DEFAULT;
}

Cat::Cat(const Cat &source)
{
	*this = source;
	std::cout << BOLDCYAN << "Cat has been cloned\n" << DEFAULT;
}

Cat::~Cat()
{
	std::cout <<BOLDRED << "Cat died\n" << DEFAULT;
}

Cat &Cat::operator=(const Cat &source)
{
	type = source.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << BOLDWHITE << "Meouwwww\n" << DEFAULT;
}