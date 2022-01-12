#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &o);
	virtual ~ScavTrap();

	ScavTrap &operator=(const ScavTrap &o);
	friend std::ostream &operator<<(std::ostream &out, ScavTrap const &scavTrap);

	void attack(const std::string &target);
	void guardGate();
};

#endif
