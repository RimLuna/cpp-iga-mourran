#pragma once

#include <string>
#include <iostream>

class ICharacter;
class AMateria
{
private:
	AMateria();

protected:
	std::string _type;

public:
	AMateria(std::string const &type);
	AMateria(const AMateria &o);
	virtual ~AMateria();

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
	std::string const &getType() const;
	AMateria &operator=(const AMateria &o);
};
