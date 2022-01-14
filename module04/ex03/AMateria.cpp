#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const std::string &type) : _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &o) : _type(o._type)
{
}

AMateria &AMateria::operator=(const AMateria &o)
{
	if (this != &o)
		_type = o._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << std::endl;
}
