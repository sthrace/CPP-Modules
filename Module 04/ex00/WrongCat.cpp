#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << BOLDYELLOW << "New WrongCat is born\n" << DEFAULT;
}

WrongCat::WrongCat(const WrongCat &source)
{
	*this = source;
	std::cout << BOLDYELLOW << "WrongCat has been cloned\n" << DEFAULT;
}

WrongCat::~WrongCat(void)
{
	std::cout <<BOLDRED << "WrongCat died\n" << DEFAULT;
}

WrongCat &WrongCat::operator=(const WrongCat &source)
{
	type = source.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << BOLDWHITE << "Wrong Meouwwww\n";
}