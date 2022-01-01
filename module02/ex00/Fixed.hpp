#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	int value;
	static const int fractionBits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif