#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &o) : ClapTrap(o)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	_hitpoints = o._hitpoints;
	_energy_points = o._energy_points;
	_attack_damage = o._attack_damage;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &o)
{
	if (this != &o)
	{
		std::cout << "FragTrap assignement operator called" << std::endl;
		this->_hitpoints = o._hitpoints;
		this->_energy_points = o._energy_points;
		this->_attack_damage = o._attack_damage;
	}
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

std::ostream &operator<<(std::ostream &out, FragTrap const &fragTrap)
{
	out << "Name: " << fragTrap._name << ", Hitpoints: " << fragTrap._hitpoints
		<< ", Energy Points: " << fragTrap._energy_points << ", Attack Damage: " << fragTrap._attack_damage << std::endl;
	return out;
}
