#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _number;
	std::string _secret;

public:
	std::string get_firstname() const;
	std::string get_lastname() const;
	std::string get_nickname() const;
	std::string get_number() const;
	std::string get_secret() const;
	void set_firstname(std::string _firstname);
	void set_lastname(std::string _lastname);
	void set_nickname(std::string _nickname);
	void set_number(std::string _number);
	void set_secret(std::string _secret);
	void display() const;
};

#endif
