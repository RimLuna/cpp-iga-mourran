#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat innak("Innak", 14);
	std::cout << innak << std::endl;

	for (int i = 0; i < 18; i++)
		innak.increment_grade();
	std::cout << innak << std::endl;

	for (int i = 0; i < 200; i++)
		innak.decrement_grade();
	std::cout << innak << std::endl;
	try
	{
		Bureaucrat nope("Nope", 0);
		std::cout << nope << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}