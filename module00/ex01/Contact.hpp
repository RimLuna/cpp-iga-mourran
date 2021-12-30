#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
public:
	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickname() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;
	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setNickname(std::string nickName);
	void	setPhoneNumber(std::string phoneNumber);
	void	setDarkestSecret(std::string darkestSecret);
		void	display() const;
};

#endif
