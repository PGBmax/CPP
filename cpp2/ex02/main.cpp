/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:00:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/13 13:06:23 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "----- Subject Tests -----" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "----- My own tests -----" << std::endl;

	a = Fixed( 60.574f );
	std::cout << "a           = " << a << std::endl;
	std::cout << "a.toInt()   = " << a.toInt() << std::endl;
	std::cout << "a.toFloat() = " << a.toFloat() << std::endl;
	std::cout << "++a   = " << ++a << std::endl;
	std::cout << "--a   = " << --a << std::endl;
	std::cout << "a * 2 = " << a * 2 << std::endl;
	std::cout << "a / 2 = " << a / 2 << std::endl;
	std::cout << "a + 2 = " << a + 2 << std::endl;
	std::cout << "a - 2 = " << a - 2 << std::endl;
	std::cout << a << std::endl;
	std::cout << "Fixed::max( a, b ) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "Fixed::min( a, b ) = " << Fixed::min( a, b ) << std::endl;
	std::cout << "Fixed::max( b, a ) = " << Fixed::max( b, a ) << std::endl;
	std::cout << "Fixed::min( b, a ) = " << Fixed::min( b, a ) << std::endl;
	std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl << "a.setRawBits(1000000)" << std::endl; 
	a.setRawBits(1000000);
	std::cout << "a           = " << a << std::endl;
	std::cout << "a.toInt()   = " << a.toInt() << std::endl;
	std::cout << "a.toFloat() = " << a.toFloat() << std::endl;

	return 0;
}