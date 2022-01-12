#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 30;
	std::cout << "DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &o) : ClapTrap(o), FragTrap(o), ScavTrap(o), _name(o._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &o)
{
	std::cout << "DiamondTrap copy assignment operator." << std::endl;
	*this = o;
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << _name << ", my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}

std::ostream &operator<<(std::ostream &out, DiamondTrap const &diamondTrap)
{
	out << "Name: " << diamondTrap._name << ", Hitpoints: " << diamondTrap._hitpoints
		<< ", Energy Points: " << diamondTrap._energy_points << ", Attack Damage: " << diamondTrap._attack_damage << std::endl;
	return out;
}
