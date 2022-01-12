#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal
{
	Brain *_brain;

public:
	Cat();
	Cat(const Cat &o);
	Cat &operator=(const Cat &o);
	virtual ~Cat();

	virtual void makeSound() const;
	virtual const std::string &getType() const;
	const Brain &getBrain() const;
};