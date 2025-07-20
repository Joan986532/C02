#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {

	public:
		Fixed();
		Fixed(const Fixed &rhs);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed();
		Fixed &operator=(const Fixed &rhs);
		const bool operator>(const Fixed &rhs) const;
		const bool operator<(const Fixed &rhs) const;
		const bool operator>=(const Fixed &rhs) const;
		const bool operator<=(const Fixed &rhs) const;
		const bool operator==(const Fixed &rhs) const;
		const bool operator!=(const Fixed &rhs) const;
		Fixed &operator+(const Fixed &rhs);
		Fixed &operator-(const Fixed &rhs);
		Fixed &operator*(const Fixed &rhs);
		Fixed &operator/(const Fixed &rhs);
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		static Fixed	min(const Fixed &rhs, const Fixed &lhs);
		static Fixed	min(Fixed &rhs, Fixed &lhs);
		static Fixed	max(const Fixed &rhs, const Fixed &lhs);
		static Fixed	max(Fixed &rhs, Fixed &lhs);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
	private:
		int					_value;
		static const int	_bits;
};

std::ostream	&operator<<(std::ostream &os, const Fixed &obj);

#endif
