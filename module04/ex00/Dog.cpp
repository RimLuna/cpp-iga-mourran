#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &o)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = o._type;
}

Dog &Dog::operator=(const Dog &o)
{
	if (this != &o)
	{
		std::cout << "Dog assignment operator" << std::endl;
		_type = o._type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Haw haw" << std::endl;
}

const std::string &Dog::getType() const
{
	return Animal::getType();
}
