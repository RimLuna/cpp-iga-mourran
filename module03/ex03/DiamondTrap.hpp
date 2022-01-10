#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	DiamondTrap();
	std::string _name;

public:
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &o);
	virtual ~DiamondTrap(void);

	DiamondTrap &DiamondTrap::operator=(DiamondTrap &o);
	friend std::ostream &operator<<(std::ostream &out, DiamondTrap const &diamondTrap);
	friend void swap(DiamondTrap &first, DiamondTrap &second);

	void whoAmI(void);
};

#endif
