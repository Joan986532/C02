#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(): _value(0) {}

Fixed::Fixed(const int nb) { _value = nb << _bits; }

Fixed::Fixed(const float nb) { _value = roundf(nb * 256); }

Fixed::Fixed(const Fixed &rhs) { *this = rhs; }

Fixed::~Fixed() {}

int	Fixed::getRawBits(void) const { return (_value); }

void Fixed::setRawBits(int const raw) { _value = raw; }

float	Fixed::toFloat(void) const { return (_value / 256.0f); }

int		Fixed::toInt(void) const { return (_value >> _bits); }

Fixed Fixed::min(Fixed &rhs, Fixed &lhs) {

	if (rhs < lhs)
		return (rhs);
	else
		return (lhs);
}

Fixed Fixed::min(const Fixed &rhs, const Fixed &lhs) {

	if (rhs < lhs)
		return (rhs);
	else
		return (lhs);
} 

Fixed Fixed::max(const Fixed &rhs, const Fixed &lhs) {

	if (rhs > lhs)
		return (rhs);
	else
		return (lhs);
}

Fixed Fixed::max(Fixed &rhs, Fixed &lhs) {

	if (rhs > lhs)
		return (rhs);
	else
		return (lhs);
}

Fixed &	Fixed::operator=(Fixed const &rhs) {

	_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &obj) {
	
	os << obj.toFloat();
	return (os);
}

const bool	Fixed::operator>(const Fixed &rhs) const { 

	return (_value > rhs._value);
}

const bool	Fixed::operator<(const Fixed &rhs) const {

	return (_value < rhs._value);
}

const bool	Fixed::operator>=(const Fixed &rhs) const {

	return (_value >= rhs._value);
}

const bool	Fixed::operator<=(const Fixed &rhs) const {

	return (_value <= rhs._value);
}

const bool Fixed::operator==(const Fixed &rhs) const {

	return (_value == rhs._value);
}

const bool Fixed::operator!=(const Fixed &rhs) const {

	return (_value != rhs._value);
}

Fixed &Fixed::operator+(const Fixed &rhs) {

	this->_value += rhs.toFloat();
	return (*this);
} 

Fixed &Fixed::operator-(const Fixed &rhs) {

	this->_value -= rhs.toFloat();
	return (*this);
}

Fixed &Fixed::operator*(const Fixed &rhs) {

	this->_value *= rhs.toFloat();
	return (*this);
}

Fixed &Fixed::operator/(const Fixed &rhs) {

	this->_value /= rhs.toFloat();
	return (*this);
}

Fixed &Fixed::operator++() {

	++_value;
	return (*this);
}

Fixed Fixed::operator++(int) {

	Fixed tmp(*this);
	++_value;
	return tmp;
}

Fixed &Fixed::operator--() {

	--_value;
	return(*this);
}

Fixed Fixed::operator--(int) {

	Fixed tmp(*this);
	--_value;
	return tmp;
}
