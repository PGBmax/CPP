/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:01:08 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/13 00:28:53 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed( const Fixed &copy );
		Fixed( const int num );
		Fixed( const float num);
		Fixed &operator=( const Fixed &ref );
		~Fixed();
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_num;
		static const int	_stock = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &ref );
	
#endif