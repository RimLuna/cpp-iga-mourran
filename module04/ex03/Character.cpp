#include "Character.hpp"

Character::Character(const std::string &name) : _name(name), _inventory(), _n(0)
{
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete _inventory[i];
}

Character::Character(const Character &o) : _n(0)
{
	for (int i = 0; i < o._n; i++)
		this->equip(o._inventory[i]->clone());
	for (int i = this->_n; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character &Character::operator=(const Character &o)
{
	_name = o._name;
	for (int i = 0; i < this->_n; i++)
		delete this->_inventory[i];
	this->_n = 0;
	for (int i = 0; i < o._n; i++)
		this->equip(o._inventory[i]->clone());
	for (int i = this->_n; i < 4; i++)
		this->_inventory[i] = nullptr;
	return (*this);
}

const std::string &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (_n == 4 || m == nullptr)
		return;
	for (int i = 0; i < _n; i++)
		if (_inventory[i] == m)
			return;
	_inventory[_n++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= _n || _inventory[idx] == nullptr)
		return;
	for (int i = idx; i < 3; i++)
	{
		_inventory[i] = _inventory[i + 1];
		_inventory[i + 1] = nullptr;
	}
	_n--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= _n || _inventory[idx] == nullptr)
		return;
	_inventory[idx]->use(target);
}
