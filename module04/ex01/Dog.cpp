#include "Dog.hpp"

Dog::Dog() : _brain(new Brain)
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain->setIdeas();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &o)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = o._type;
	_brain = new Brain(*o._brain);
}

Dog &Dog::operator=(const Dog &o)
{
	if (this != &o)
	{
		std::cout << "Dog assignment operator" << std::endl;
		_type = o._type;
		_brain = new Brain(*o._brain);
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

const Brain &Dog::getBrain() const
{
	return *_brain;
}
