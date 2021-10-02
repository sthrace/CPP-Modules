#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "header.hpp"
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &source);
		virtual ~AMateria();

		AMateria &operator=(const AMateria &source);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif