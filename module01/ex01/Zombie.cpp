#include "Zombie.hpp"

void	Zombie::announce(void ) const
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{

}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
