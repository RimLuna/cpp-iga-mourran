#pragma once

#include <iostream>
#include <exception>

class Bureaucrat
{
	const std::string _name;
	int _grade;

public:
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &o);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &o);
	const std::string &getName() const;
	int getGrade() const;
	void increment_grade();
	void decrement_grade();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);