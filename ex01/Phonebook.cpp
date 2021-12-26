#include "Phonebook.hpp"

Phonebook::Phonebook() : n(0) {}

int		Phonebook::getN() const
{
	return (this->n);
}

void	Phonebook::add_contact()
{
	std::string		s;

	if (this->n == 7)
		this->n = 0;
	std::cout << "First Name : ";
	std::cin >> s;
	this->contactList[this->n].setFirstName(s);
	std::cout << "Last Name : ";
	std::cin >> s;
	this->contactList[this->n].setLastName(s);
	std::cout << "Nickame : ";
	std::cin >> s;
	this->contactList[this->n].setNickname(s);
	std::cout << "Phone Number : ";
	std::cin >> s;
	this->contactList[this->n].setPhoneNumber(s);
	std::cout << "Darkest Secret : ";
	std::cin >> s;
	this->contactList[this->n].setDarkestSecret(s);
	this->n++;
}

void	Phonebook::search_contact() const
{
	
}
