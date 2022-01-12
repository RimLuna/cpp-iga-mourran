#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &o)
{
	for (int i = 0; i < 100; ++i)
		_ideas[i] = o._ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &o)
{
	std::cout << "Brain assignment operator" << std::endl;

	if (this != &o)
	{
		for (int i = 0; i < 100; ++i)
			_ideas[i] = o._ideas[i];
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Brain &brain)
{
	for (int i = 0; i < 100; ++i)
	{
		out << brain._ideas[i] << " ,";
	}
	out << std::endl;
	return out;
}

void Brain::setIdeas()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Idea" + std::to_string(i + 1);
}
