#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	std::string _name;
	unsigned int _hitpoints;
	unsigned int _energy_points;
	int _attack_damage;

public:
	ClapTrap();
	ClapTrap(const ClapTrap &o);
	ClapTrap(const std::string &name);
	~ClapTrap(void);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap &operator=(const ClapTrap &o);
	friend std::ostream &operator<<(std::ostream &out, ClapTrap const &clapTrap);
};

#endif