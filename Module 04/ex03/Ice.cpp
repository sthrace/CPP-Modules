#include "Ice.hpp"

Ice::Ice(void){
	type = "ice";
}

Ice::Ice(const Ice &source){
	*this = source;
}

Ice::~Ice(){}

Ice	&Ice::operator=(const Ice &source){
	if (this == &source)
		return *this;
	type = source.type;
	return *this;
}

AMateria*	Ice::clone() const{
	AMateria *clone = new Ice();
	return (clone);
}

void	Ice::use(ICharacter& target){
	std::cout << BOLDBLUE << "* shoots an Ice bolt at " << target.getName() << " *\n" << DEFAULT;
}



