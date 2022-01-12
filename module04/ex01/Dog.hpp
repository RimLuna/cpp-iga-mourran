#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	Brain *_brain;

public:
	Dog();
	Dog(const Dog &o);
	Dog &operator=(const Dog &o);
	virtual ~Dog();

	virtual void makeSound() const;
	virtual const std::string &getType() const;
	const Brain &getBrain() const;
};