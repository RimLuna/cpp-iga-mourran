#include "Phonebook.hpp"
#include <iomanip>

Phonebook::Phonebook() : n(0) {}

int Phonebook::getN() const
{
	return (this->n);
}

void Phonebook::add_contact()
{
	std::string s;

	std::cout << "First Name : ";
	std::getline(std::cin, s);
	this->contactList[this->n % 8].set_firstname(s);

	std::cout << "Last Name : ";
	std::getline(std::cin, s);
	this->contactList[this->n % 8].set_lastname(s);

	std::cout << "Nickame : ";
	std::getline(std::cin, s);
	this->contactList[this->n % 8].set_nickname(s);

	std::cout << "Phone Number : ";
	std::getline(std::cin, s);
	this->contactList[this->n % 8].set_number(s);

	std::cout << "Darkest Secret : ";
	std::getline(std::cin, s);
	this->contactList[this->n % 8].set_secret(s);
	if (n < 8)
		this->n++;
}

void Phonebook::search_contact() const
{
	if (this->n == 0)
	{
		std::cout << "No stored contacts." << std::endl;
		return;
	}
	std::cout << "     ---------------------------------------" << std::endl;
	std::cout << std::setw(10) << "Index"
			  << "|";
	std::cout << std::setw(10) << "First Name"
			  << "|";
	std::cout << std::setw(10) << "Last Name"
			  << "|";
	std::cout << std::setw(10) << "_nickname"
			  << "|" << std::endl;
	std::cout << "     ---------------------------------------" << std::endl;
	for (int i = 0; i < this->n; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->format_column(this->contactList[i].get_firstname()) << "|";
		std::cout << std::setw(10) << this->format_column(this->contactList[i].get_lastname()) << "|";
		std::cout << std::setw(10) << this->format_column(this->contactList[i].get_nickname()) << "|" << std::endl;
	}
	std::cout << "     ---------------------------------------" << std::endl;
	std::string input;
	unsigned int index;

	std::cout << "Index: ";
	std::getline(std::cin, input);
	std::istringstream iss(input);
	iss >> index;

	index = (index - 1) % this->n;

	this->contactList[index].display();
}

std::string const Phonebook::format_column(std::string const s) const
{
	return (s.size() > 10 ? s.substr(0, 9) + '.' : s);
}
