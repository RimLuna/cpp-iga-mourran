#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &o)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	_hitpoints = o._hitpoints;
	_energy_points = o._energy_points;
	_attack_damage = o._attack_damage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &o)
{
	if (this != &o)
	{
		std::cout << "ScavTrap assignement operator called" << std::endl;
		this->_hitpoints = o._hitpoints;
		this->_energy_points = o._energy_points;
		this->_attack_damage = o._attack_damage;
	}
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

std::ostream &operator<<(std::ostream &out, ScavTrap const &scavTrap)
{
	out << "Name: " << scavTrap._name << ", Hitpoints: " << scavTrap._hitpoints
		<< ", Energy Points: " << scavTrap._energy_points << ", Attack Damage: " << scavTrap._attack_damage << std::endl;
	return out;
}
