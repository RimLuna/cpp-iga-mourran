#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	int value;
	static const int fractionBits = 8;

public:
	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	~Fixed();
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &fp);
	bool operator>(Fixed const &fp) const;
	bool operator<(Fixed const &fp) const;
	bool operator>=(Fixed const &fp) const;
	bool operator<=(Fixed const &fp) const;
	bool operator==(Fixed const &fp) const;
	bool operator!=(Fixed const &fp) const;
	Fixed operator-(Fixed const &fp) const;
	Fixed operator+(Fixed const &fp) const;
	Fixed operator/(Fixed const &fp) const;
	Fixed operator*(Fixed const &fp) const;
	Fixed &operator--(void);
	Fixed &operator++(void);
	Fixed operator--(int);
	Fixed operator++(int);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;
	static const Fixed &max(const Fixed &x, const Fixed &y);
	static const Fixed &min(const Fixed &x, const Fixed &y);
	static Fixed &min(Fixed &x, Fixed &y);
	static Fixed &max(Fixed &x, Fixed &y);
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fix);

#endif