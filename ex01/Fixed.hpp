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
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
	private:
		int					_value;
		static const int	_bits;
};

std::ostream	&operator<<(std::ostream &os, const Fixed &rhs);

#endif
