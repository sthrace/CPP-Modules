#pragma once
#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
	public:
		Cure(void);
		Cure(const Cure &source);
		~Cure();

		Cure &operator=(const Cure &source);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif