#pragma once
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	library[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &source);
		~MateriaSource();

		MateriaSource &operator=(const MateriaSource &source);
		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};

#endif