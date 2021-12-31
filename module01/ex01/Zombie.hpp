#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	std::string	name;
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	announce(void) const;
		void	setName(std::string name);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif
