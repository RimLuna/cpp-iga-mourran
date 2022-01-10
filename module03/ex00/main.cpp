#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("Innak");
	std::cout << clapTrap;

	clapTrap.attack("Enemy");
	clapTrap.beRepaired(20);
	clapTrap.takeDamage(8);

	std::cout << clapTrap;

	ClapTrap clapTrapCopy(clapTrap);
	std::cout << clapTrapCopy;

	ClapTrap clapTrap2("Enemy2");
	clapTrapCopy = clapTrap2;
	std::cout << clapTrapCopy;
}
