#include "Cat.hpp"

Cat::Cat() : _brain(new Brain)
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain->setIdeas();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &o)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = o._type;
	_brain = new Brain(*o._brain);
}

Cat &Cat::operator=(const Cat &o)
{
	if (this != &o)
	{
		std::cout << "Cat oassignment operator" << std::endl;
		_type = o._type;
		_brain = new Brain(*o._brain);
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

const Brain &Cat::getBrain() const
{
	return *_brain;
}
