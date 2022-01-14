#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &o);
	Cure &operator=(const Cure &o);

	virtual AMateria *clone() const;

	virtual void use(ICharacter &target);
};
