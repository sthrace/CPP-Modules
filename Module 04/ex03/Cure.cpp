#include "Cure.hpp"

Cure::Cure(void){
	type = "Cure";
}

Cure::Cure(const Cure &source){
	*this = source;
}

Cure::~Cure(){}

Cure	&Cure::operator=(const Cure &source){
	type = source.type;
	return *this;
}

AMateria*	Cure::clone() const{
	AMateria *clone = new Cure();
	return (clone);
}

void	Cure::use(ICharacter& target){
	std::cout << BOLDBLUE << "* heals " << target << "'s wounds *\n" << DEFAULT;
}



