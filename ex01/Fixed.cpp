#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const int nb) {

	std::cout << "Int constructor called" << std::endl;
	_value = nb << _bits;
}

Fixed::Fixed(const float nb) {

	std::cout << "Float constructor called" << std::endl;
	_value = roundf(nb * (1 << _bits));
}

Fixed::Fixed(const Fixed &rhs) {

	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {

	return (this->_value);
}

void Fixed::setRawBits(int const raw) {

	this->_value = raw;
}

Fixed &	Fixed::operator=(Fixed const &rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs) {
	
	os << rhs.toFloat();
	return (os);
}

float	Fixed::toFloat(void) const {

	return (_value / (1 << _bits));
}

int		Fixed::toInt(void) const {

	return (_value >> _bits);
}
