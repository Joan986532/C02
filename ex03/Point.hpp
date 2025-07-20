#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
	 public:
		Point();
		Point (const float x, const float y);
		Point(const Point &obj);
		Point &operator=(const Point &rhs);
		~Point();
		Fixed get_xValue(void) const ;
		Fixed get_yValue(void) const ;
	 private:
		const Fixed _x;
		const Fixed _y;
		
};
 
bool bsp(Point const &a, Point const &b, Point const &c, Point const &p);

#endif
