#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		library[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &source){
	for (int i = 0; i < 4; i++)
		library[i] = source.library[i];
}

MateriaSource::~MateriaSource(){}

MateriaSource &MateriaSource::operator=(const MateriaSource &source){
	for (int i = 0; i < 4; i++)
		library[i] = source.library[i];
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (library[i] == NULL){
			library[i] = m;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++){
		if (library[i]->getType() == type){
			AMateria *copy;
			if (library[i]->getType() == "ice")
				copy = new Ice();
			else
				copy = new Cure();
			return(copy);
		}
	}
	return (0);
}
