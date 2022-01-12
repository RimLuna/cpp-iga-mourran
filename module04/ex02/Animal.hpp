#pragma once

#include <iostream>
#include <string>

class Animal
{

public:
	Animal();
	Animal(const Animal &o);
	virtual ~Animal();

	Animal &operator=(const Animal &o);
	virtual const std::string &getType() const = 0;
	virtual void makeSound() const = 0;

protected:
	std::string _type;
};
