#include "Point.hpp"

bool isZero(Fixed const& f) {

    const float epsilon = 0.0001f;
    float value = f.toFloat();
    return value > -epsilon && value < epsilon;
}

Fixed	getSign(Point const &a, Point const &b, Point const &c) {

	return (b.get_xValue() - a.get_xValue()) * (c.get_yValue() - a.get_yValue())
		- (b.get_yValue() - a.get_yValue()) * (c.get_xValue() - a.get_xValue());
}

bool bsp(Point const &a, Point const &b, Point const &c, Point const &p) {

	Fixed	d1, d2, d3;
	bool	is_neg, is_pos;

	d1 = getSign(p, a, b);
	d2 = getSign(p, b, c);
	d3 = getSign(p, c, a);

    if (isZero(d1) || isZero(d2) || isZero(d3))
        return false;

	is_neg = (d1 < 0) && (d2 < 0) && (d3 < 0);
	is_pos = (d1 > 0) && (d2 > 0) && (d3 > 0);

	return is_neg || is_pos;
}

