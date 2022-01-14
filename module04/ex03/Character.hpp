#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
	std::string _name;
	AMateria *_inventory[4];
	int _n;

public:
	Character(std::string const &name);
	Character(Character const &o);
	virtual ~Character();

	Character &operator=(Character const &o);

	std::string const &getName(void) const;

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};
