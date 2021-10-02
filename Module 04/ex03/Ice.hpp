#pragma once
#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &source);
		~Ice();

		Ice &operator=(const Ice &source);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif