#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{
	Contact contactList[8];
	int n;
	std::string const format_column(std::string const s) const;

public:
	Phonebook();
	int getN() const;
	void add_contact();
	void search_contact() const;
};

#endif
