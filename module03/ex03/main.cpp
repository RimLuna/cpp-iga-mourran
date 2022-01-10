#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap fragTrap("Innak");
	std::cout << fragTrap;

	fragTrap.attack("Enemy");
	fragTrap.beRepaired(5);
	fragTrap.takeDamage(10);

	std::cout << fragTrap << std::endl;
	fragTrap.highFivesGuys();

	fragTrap.takeDamage(200);
	std::cout << fragTrap;
}
