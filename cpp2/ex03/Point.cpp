/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:15:51 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/13 13:45:14 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point( const float x, const float y ) : _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point	&Point::operator=(const Point &op)
{
	this->_x = op._x;
	this->_y = op._y;
	return *this;
}

Point::~Point()
{
}

const Fixed &Point::getX() const
{
	return (this->_x);
}

const Fixed &Point::getY() const
{
	return (this->_y);
}