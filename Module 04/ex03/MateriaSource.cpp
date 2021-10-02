#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		library[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &source){
	for (int i = 0; i < 4; i++)
		library[i] = source.library[i];
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		if (library[i])
			delete library[i];
}

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
	assert(!type.compare("ice") || !type.compare("cure"));
	for (int i = 0; i < 4; i++){
		if (!library[i])
			break ;
		if (library[i]->getType() == type)
			return library[i]->clone();
	}
	return (0);
}
