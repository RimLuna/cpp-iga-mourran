#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("one");
	diamond.whoAmI();
	std::cout << diamond << std::endl;

	diamond.attack("enemy");
	diamond.takeDamage(10);
	diamond.beRepaired(12);
	DiamondTrap d(diamond);
}
