#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &o)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = o._type;
}

Cat &Cat::operator=(const Cat &o)
{
	if (this != &o)
	{
		std::cout << "Cat oassignment operator" << std::endl;
		_type = o._type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaaaaw" << std::endl;
}

const std::string &Cat::getType() const
{
	return Animal::getType();
}
