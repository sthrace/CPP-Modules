#include "AMateria.hpp"

AMateria::AMateria(void) : type("NoType"){}

AMateria::AMateria(std::string const &type) : type(type){}

AMateria::AMateria(const AMateria &source){
	*this = source;
}

AMateria::~AMateria(){}

AMateria	&AMateria::operator=(const AMateria &source){
	type = source.type;
	return *this;
}

std::string	const &AMateria::getType(void) const {return type;}

void	AMateria::use(ICharacter &) {}

