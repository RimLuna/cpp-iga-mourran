#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;

	horde = zombieHorde(10, "Mok");
	delete [] horde;
}