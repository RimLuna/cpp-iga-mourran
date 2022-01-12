#include "Animal.hpp"

Animal::Animal(void) : _type("--")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &o) : _type(o._type)
{
	std::cout << "Animal copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &o)
{
	if (this != &o)
	{
		std::cout << "Animal assignment operator" << std::endl;
		_type = o._type;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "--" << std::endl;
}

const std::string &Animal::getType() const
{
	return _type;
}
