#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
private:
	std::string _name;

public:
	DiamondTrap();
	using ScavTrap::attack;
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &o);
	virtual ~DiamondTrap(void);

	DiamondTrap &operator=(DiamondTrap &o);
	friend std::ostream &operator<<(std::ostream &out, DiamondTrap const &diamondTrap);

	void whoAmI(void);
};

#endif
