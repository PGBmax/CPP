/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 09:58:38 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/28 10:09:05 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(const Point &a, const Point &b, const Point &c)
{
	Fixed area =	(a.getX() * (b.getY() - c.getY())
					+ b.getX() * (c.getY() - a.getY())
					+ c.getX() * (a.getY() - b.getY()))
					/ 2.0f;
	area.Abs();
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc;
	Fixed abp;
	Fixed acp;
	Fixed bcp;

	abc = area(a, b, c);
	abp = area(a, b, point);
	acp = area(a, c, point);
	bcp = area(b, c, point);

	if (abc.getRawBits() == (abp.getRawBits() + acp.getRawBits() + bcp.getRawBits()))
		return (true);
	return (false);
}