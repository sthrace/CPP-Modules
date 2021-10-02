#include "Cure.hpp"

Cure::Cure(void){
	type = "cure";
}

Cure::Cure(const Cure &source){
	*this = source;
}

Cure::~Cure(){}

Cure	&Cure::operator=(const Cure &source){
	if (this == &source)
		return *this;
	type = source.type;
	return *this;
}

AMateria*	Cure::clone() const{
	AMateria *clone = new Cure();
	return (clone);
}

void	Cure::use(ICharacter& target){
	std::cout << BOLDBLUE << "* heals " << target.getName() << "'s wounds *\n" << DEFAULT;
}




