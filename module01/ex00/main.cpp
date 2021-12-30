#include "Zombie.hpp"

int		main(void)
{
	Zombie stackZ("Stack Mok");
	Zombie *heapZ = newZombie("Heap Mok");

	stackZ.announce();
	heapZ->announce();
	randomChump("Random Mok");
	delete heapZ;
	return (0);
}
