#pragma once
#include "Animal.hpp"
#include <string>

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &o);
	Cat &operator=(const Cat &o);
	virtual ~Cat();

	virtual void makeSound() const;
	virtual const std::string &getType() const;
};