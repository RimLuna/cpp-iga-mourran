#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = name;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &o) : ClapTrap(o)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = o;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor of " << _name << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &a)
{
	_name = a.get_name();
	_hitpoints = a.get_hitpoints();
	_energy_points = a.get_energy_points();
	_attack_damage = a.get_attack_damage();
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " said. Give me a high five! Please!" << std::endl;
}
