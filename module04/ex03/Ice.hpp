#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &o);
	Ice &operator=(const Ice &o);

	virtual AMateria *clone() const;

	virtual void use(ICharacter &target);
};
