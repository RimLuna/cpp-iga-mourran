#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &o);
	Dog &operator=(const Dog &o);
	virtual ~Dog();

	virtual void makeSound() const;
	virtual const std::string &getType() const;
};