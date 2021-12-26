#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook {
	Contact		contactList[8];
	int			n;
public:
	Phonebook();
	int		getN() const;
	void	add_contact();
	void	search_contact() const;
};

#endif
