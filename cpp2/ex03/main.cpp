/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:00:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/13 13:52:13 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{

	Point	a(0, 6);
	Point	b(6, 8);
	Point	c(6, 1);
	Point	vertex(6, 1);
	Point	edge(6, 5);
	Point	valid(5, 5);
	Point	not_valid(10, 5);


	if (bsp(a, b, c, vertex))
		std::cout << "The Point 'vertex' is inside the abc triangle" << std::endl;
	else
		std::cout << "The Point 'vertex' isn't inside the abc triangle" << std::endl;

	if (bsp(a, b, c, edge))
		std::cout << "The Point 'edge' is inside the abc triangle" << std::endl;
	else
		std::cout << "The Point 'edge' isn't inside the abc triangle" << std::endl;
	
	if (bsp(a, b, c, valid))
		std::cout << "The Point 'valid' is inside the abc triangle" << std::endl;
	else
		std::cout << "The Point 'valid' isn't inside the abc triangle" << std::endl;

	if (bsp(a, b, c, not_valid))
		std::cout << "The Point 'not_valid' is inside the abc triangle" << std::endl;
	else
		std::cout << "The Point 'not_valid' isn't inside the abc triangle" << std::endl;

	return 0;
}