/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joannn <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:48:58 by joannn            #+#    #+#             */
/*   Updated: 2025/07/19 17:48:58 by joannn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point &obj) { *this = obj; }

Point &Point::operator=(const Point &obj) {

	_x = obj.get_xValue();
	_y = obj.get_yValue();
	return (*this);
}

Point::~Point() {}

Fixed Point::get_xValue(void) const { return (_x); }

Fixed Point::get_yValue(void) const { return (_y); }
