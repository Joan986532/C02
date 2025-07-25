#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &rhs) {

	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {

	this->_value = raw;
}

Fixed &	Fixed::operator=(Fixed const &rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_value = rhs.getRawBits();
	return (*this);
}
