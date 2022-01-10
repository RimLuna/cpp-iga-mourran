#include "ScavTrap.hpp"

int main()
{
	ScavTrap a;
	std::cout << "hitpoints: " << a.get_hitpoints() << std::endl;
	std::cout << "energyPoints: " << a.get_energy_points() << std::endl;
	std::cout << "attackDamage: " << a.get_attack_damage() << std::endl;
	a.takeDamage(3);
	ScavTrap b(a);
	b.takeDamage(3);
	ScavTrap c;
	c = b;
	b.takeDamage(3);

	ScavTrap d("ikhane");
	d.attack("ibzdane");
	d.takeDamage(4);
	d.beRepaired(10);
	d.guardGate();
}
