#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		Fixed &operator=(const Fixed&);
};

#endif
