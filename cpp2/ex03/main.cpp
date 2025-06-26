/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:00:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/26 15:25:09 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point a, Point b, Point c, Point point)
{
}

int main( void ) {

	Point	a(2, 9);
	Point	b(10, 5);
	Point	c;
	Point	point(4, 6);

	if (bsp(a, b, c, point))
		std::cout << "The Point 'point' is inside the abc triangle" << std::endl;
	else
		std::cout << "The Point 'point' isn't inside the abc triangle" << std::endl;

	return 0;
}