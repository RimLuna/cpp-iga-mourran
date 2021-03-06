#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <sstream>
class Phonebook
{
	Contact contactList[8];
	int n;
	std::string const format_column(std::string const s) const;

public:
	Phonebook();
	int get_n() const;
	void add_contact();
	void search_contact() const;
};

#endif
