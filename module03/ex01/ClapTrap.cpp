#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name(""), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = a;
}

ClapTrap::ClapTrap(const std::string &name)
	: _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor of called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &o)
{
	if (this != &o)
	{
		std::cout << "ClapTrap assignement operator called" << std::endl;
		this->_name = o._name;
		this->_hitpoints = o._hitpoints;
		this->_energy_points = o._energy_points;
		this->_attack_damage = o._attack_damage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitpoints = (_hitpoints < amount) ? 0 : _hitpoints - amount;
	_hitpoints = _hitpoints < 0 ? 0 : _hitpoints;
	std::cout << "ClapTrap " << _name << " took " << amount << " damage, hit points to " << _hitpoints << std::endl;
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &clapTrap)
{
	out << "Name: " << clapTrap._name << ", Hitpoints: " << clapTrap._hitpoints
		<< ", Energy Points: " << clapTrap._energy_points << ", Attack Damage: " << clapTrap._attack_damage << std::endl;
	return out;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitpoints += amount;
	std::cout << "ClapTrap " << _name << " is repaired " << amount << ", hit points to " << _hitpoints << std::endl;
}
