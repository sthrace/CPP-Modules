#pragma once
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria*	inventory[4];
		std::string	m_name;
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &source);
		~Character();

		Character &operator=(const Character &source);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif