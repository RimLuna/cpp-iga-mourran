#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = "Nameless";
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &o) : ClapTrap(o)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = o;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor of " << _name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a)
{
	_name = a.get_name();
	_hitpoints = a.get_hitpoints();
	_energy_points = a.get_energy_points();
	_attack_damage = a.get_attack_damage();
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}
