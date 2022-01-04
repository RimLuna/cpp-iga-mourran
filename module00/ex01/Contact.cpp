#include "Contact.hpp"

std::string Contact::get_firstname() const
{
	return (this->_firstname);
}

std::string Contact::get_lastname() const
{
	return (this->_lastname);
}

std::string Contact::get_nickname() const
{
	return (this->_nickname);
}

std::string Contact::get_number() const
{
	return (this->_number);
}

std::string Contact::get_secret() const
{
	return (this->_secret);
}

void Contact::set_firstname(std::string _firstname)
{
	this->_firstname = _firstname;
}

void Contact::set_lastname(std::string _lastname)
{
	this->_lastname = _lastname;
}

void Contact::set_nickname(std::string _nickname)
{
	this->_nickname = _nickname;
}

void Contact::set_number(std::string _number)
{
	this->_number = _number;
}

void Contact::set_secret(std::string _secret)
{
	this->_secret = _secret;
}

void Contact::display() const
{

	std::cout << "First name : " << this->_firstname << std::endl;
	std::cout << "Last name : " << this->_lastname << std::endl;
	std::cout << "_nickname : " << this->_nickname << std::endl;
	std::cout << "Phone number : " << this->_number << std::endl;
	std::cout << "Darkest secret : " << this->_secret << std::endl;
}
