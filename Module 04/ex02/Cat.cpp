#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	brain = new Brain();
	std::cout << BOLDCYAN << "New Cat is born\n" << DEFAULT;
}

Cat::Cat(const Cat &source)
{
	brain = new Brain(*source.brain);
	type = source.type;
	std::cout << BOLDCYAN << "Cat has been cloned\n" << DEFAULT;
}

Cat::~Cat(void)
{
	if (brain)
		delete brain;
	std::cout <<BOLDRED << "Cat died\n" << DEFAULT;
}

Cat &Cat::operator=(const Cat &source)
{
	if (this == &source)
		return *this;
	*brain = *source.brain;
	type = source.type;
	std::cout << BOLDCYAN << "Cat has been copied\n" << DEFAULT;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << BOLDWHITE << "Meouwww\n" << DEFAULT;
}