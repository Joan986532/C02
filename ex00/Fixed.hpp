#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed(const Fixed &rhs);
		~Fixed();
		Fixed &operator=(const Fixed &rhs);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int					value;
		static const int	bits;
};

#endif
