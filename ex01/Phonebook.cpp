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
	this->contactList[this->n % 8].setFirstName(s);

	std::cout << "Last Name : ";
	std::getline(std::cin, s);
	this->contactList[this->n % 8].setLastName(s);

	std::cout << "Nickame : ";
	std::getline(std::cin, s);
	this->contactList[this->n % 8].setNickname(s);

	std::cout << "Phone Number : ";
	std::getline(std::cin, s);
	this->contactList[this->n % 8].setPhoneNumber(s);

	std::cout << "Darkest Secret : ";
	std::getline(std::cin, s);
	this->contactList[this->n % 8].setDarkestSecret(s);
	if (n < 8)
		this->n++;
}

bool check_number(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
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
	std::cout << std::setw(10) << "Nickname"
			  << "|" << std::endl;
	std::cout << "     ---------------------------------------" << std::endl;
	for (int i = 0; i < this->n; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->format_column(this->contactList[i].getFirstName()) << "|";
		std::cout << std::setw(10) << this->format_column(this->contactList[i].getLastName()) << "|";
		std::cout << std::setw(10) << this->format_column(this->contactList[i].getNickname()) << "|" << std::endl;
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