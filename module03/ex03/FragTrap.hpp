#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &o);
	virtual ~FragTrap();

	FragTrap &operator=(const FragTrap &o);

	void attack(const std::string &target);
	void highFivesGuys(void);
	friend std::ostream &operator<<(std::ostream &out, FragTrap const &fragTrap);
};

#endif
