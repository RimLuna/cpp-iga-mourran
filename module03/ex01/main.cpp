#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("clap_clap");
	std::cout << clapTrap;

	ScavTrap scavTrap("Innak");
	std::cout << scavTrap;

	scavTrap.attack("Enemy");
	scavTrap.beRepaired(20);
	scavTrap.takeDamage(8);

	std::cout << scavTrap << std::endl;
	scavTrap.guardGate();

	scavTrap.takeDamage(200);
	std::cout << scavTrap;

	ScavTrap scavTrapCopy(scavTrap);
	std::cout << scavTrapCopy;
}
