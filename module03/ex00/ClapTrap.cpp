#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("Nameless"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

ClapTrap::ClapTrap(const std::string &name)
	: _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of " << _name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a)
{
	_name = a.get_name();
	_hitpoints = a.get_hitpoints();
	_energy_points = a.get_energy_points();
	_attack_damage = a.get_attack_damage();
	return *this;
}

const std::string &ClapTrap::get_name(void) const
{
	return _name;
}

unsigned int ClapTrap::get_hitpoints(void) const
{
	return _hitpoints;
}

unsigned int ClapTrap::get_energy_points(void) const
{
	return _energy_points;
}

unsigned int ClapTrap::get_attack_damage(void) const
{
	return _attack_damage;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitpoints = (_hitpoints < amount) ? 0 : _hitpoints - amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " damage, hit points to " << _hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitpoints += amount;
	std::cout << "ClapTrap " << _name << " is repaired " << amount << ", hit points to " << _hitpoints << std::endl;
}
