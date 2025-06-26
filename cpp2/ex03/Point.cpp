/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:15:51 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/26 14:49:14 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	Fixed temp1(0);
	Fixed temp2(0);
	_x = temp1;
	_y = temp2;
}

Point::Point( const float x, const float y )
{
	Fixed temp1(x);
	Fixed temp2(y);
	_x = temp1;
	_y = temp2;
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

Fixed Point::getX()
{
	return (this->_x);
}

Fixed Point::getY()
{
	return (this->_y);
}