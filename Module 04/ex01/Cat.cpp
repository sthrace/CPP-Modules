#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	brain = new Brain();
	std::cout << BOLDCYAN << "New Cat is born\n" << DEFAULT;
}

Cat::Cat(const Cat &source)
{
	brain = new Brain();
	*brain = *source.brain;
	type = source.type;
	std::cout << BOLDCYAN << "Cat has been cloned\n" << DEFAULT;
}

Cat::~Cat()
{
	delete brain;
	std::cout <<BOLDRED << "Cat died\n" << DEFAULT;
}

Cat &Cat::operator=(const Cat &source)
{
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *source.brain;
	type = source.type;
	return (*this);
	std::cout << BOLDCYAN << "Cat has been copied\n" << DEFAULT;
}

void	Cat::makeSound(void) const
{
	std::cout << BOLDWHITE << "Meouwwww\n" << DEFAULT;
}