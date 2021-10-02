#include "Character.hpp"

Character::Character(void) : m_name("NoName") {
	pos = 0;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name) : m_name(name) {
	pos = 0;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &source){
	pos = source.pos;
	m_name = source.m_name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = source.inventory[i]->clone();
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++){
		if (inventory[i])
			delete inventory[i];
	}
}

Character	&Character::operator=(const Character &source){
	m_name = source.m_name;
	pos = source.pos;
	for (int i = 0; i < 4; i++)
		inventory[i] = source.inventory[i];
	return *this;
}

std::string const	&Character::getName(void) const{ return m_name; }

void	Character::equip(AMateria *m){
	for (int i = pos; i < 4; i++){
		if (inventory[i] == NULL){
			inventory[i] = m;
			pos = i;
			break ;
		}
	}
}

void	Character::unequip(int idx){
	inventory[idx] = NULL;
	if (idx < pos)
		pos = idx;
}

void	Character::use(int idx, ICharacter &target){
	assert(idx >= 0 && idx <= 4 && inventory[idx]);
	inventory[idx]->use(target);
}
