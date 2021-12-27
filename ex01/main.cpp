#include "Phonebook.hpp"

int main()
{
	// Contact c = Contact();

	// c.setFirstName("mok");
	// c.display();
	// Phonebook p;

	// printf("%d\n", p.getN());
	// p.add_contact();
	// p.search_contact();

	Phonebook phonebook;
	std::string input;

	while (true)
	{
		std::cout << "Command: ";
		std::getline(std::cin, input);

		if (input == "EXIT")
		{
			return 0;
		}
		else if (input == "ADD")
		{
			phonebook.add_contact();
		}
		else if (input == "SEARCH")
		{
			phonebook.search_contact();
		}
		else
		{
			std::cerr << "Huh???" << std::endl;
			continue;
		}
	}
	return 0;
}
