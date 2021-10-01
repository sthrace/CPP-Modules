#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << BOLDCYAN << "Brain created\n" << DEFAULT;
}

Brain::Brain(const Brain &source)
{
	*this = source;
	std::cout << BOLDCYAN << "Brain has been cloned\n" << DEFAULT;
}

Brain::~Brain()
{
	std::cout <<BOLDRED << "Brain destroyed\n" << DEFAULT;
}

Brain &Brain::operator=(const Brain &source)
{
	*this = source;
	return (*this);
}