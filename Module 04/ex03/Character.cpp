#include "Character.hpp"

Character::Character(void) : m_name("NoName") {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name) : m_name(name) {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &source){
	m_name = source.m_name;
	for (int i = 0; i < 4; i++)
		inventory[i] = source.inventory[i];
}

Character::~Character() {}

Character	&Character::operator=(const Character &source){
	m_name = source.m_name;
	for (int i = 0; i < 4; i++)
		inventory[i] = source.inventory[i];
	return *this;
}

std::string const	Character::getName(void) const{ return m_name; }

void	Character::equip(AMateria *m){
	for (int i = 0; i < 4; i++){
		if (inventory[i] == NULL){
			inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx){ inventory[idx] = NULL }

void	Character::use(int idx, ICharacter &target){

}
