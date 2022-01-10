#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	std::cout << "hitpoints: " << a.get_hitpoints() << std::endl;
	std::cout << "energyPoints: " << a.get_energy_points() << std::endl;
	std::cout << "attackDamage: " << a.get_attack_damage() << std::endl;
	a.takeDamage(3);
	ClapTrap b(a);
	b.takeDamage(3);
	ClapTrap c;
	c = b;
	b.takeDamage(3);

	ClapTrap d("ikhane");
	d.attack("ibzdane");
	d.takeDamage(4);
	d.beRepaired(10);
}
