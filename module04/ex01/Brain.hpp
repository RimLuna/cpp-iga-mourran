#pragma once
#include <iostream>
#include <string>

class Brain
{

public:
	Brain();
	~Brain();
	Brain(const Brain &o);
	Brain &operator=(const Brain &o);

	void setIdeas();
	friend std::ostream &operator<<(std::ostream &out, const Brain &brain);

protected:
	std::string _ideas[100];
};
