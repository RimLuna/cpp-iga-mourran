#pragma once

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{

	AMateria *_inventory[4];

public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &o);
	MateriaSource &operator=(const MateriaSource &o);

	virtual void learnMateria(AMateria *materia);
	virtual AMateria *createMateria(const std::string &type);
};
