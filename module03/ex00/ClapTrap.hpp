#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	std::string _name;
	unsigned int _hitpoint;
	unsigned int _energy_points;
	int _attack_damage;

public:
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap(std::string const &name = "nameless");
	ClapTrap(ClapTrap const &o);
	~ClapTrap(void);

	ClapTrap &operator=(const ClapTrap &o);
};

#endif