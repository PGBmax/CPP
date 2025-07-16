/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 09:58:38 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/13 13:55:35 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(const Point &a, const Point &b, const Point &c)
{
	Fixed area = ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
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

	Fixed result(abc - (bcp + abp + acp));
	result.Abs();

	if (bcp > Fixed(0) && abp > Fixed(0) && acp > Fixed(0) && result <= Fixed(0.00390625f))
		return (true);
	return (false);
}