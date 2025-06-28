/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:00:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/27 11:58:15 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(const Point &a, const Point &b, const Point &c)
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

	std::cout << "abc : " << abc << std::endl;
	std::cout << "abp : " << abp << std::endl;
	std::cout << "acp : " << acp << std::endl;
	std::cout << "bcp : " << bcp << std::endl;
	std::cout << "abp + acp + bcp : " << abp + acp + bcp << std::endl;
	if (abc == (abp + acp + bcp))
		return (true);
	return (false);
}

int main( void ) {

	Point	a(0, 0);
	Point	b(2, 7);
	Point	c(4, 1);
	Point	point(3, 2);

	if (bsp(a, b, c, point))
		std::cout << "The Point 'point' is inside the abc triangle" << std::endl;
	else
		std::cout << "The Point 'point' isn't inside the abc triangle" << std::endl;

	return 0;
}