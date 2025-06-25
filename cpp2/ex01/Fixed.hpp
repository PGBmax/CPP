/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:01:08 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/25 15:17:47 by pboucher         ###   ########.fr       */
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
		~Fixed();
		Fixed &operator=( const Fixed &ref );
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_num;
		static const int	_stock;
};
std::ostream &operator<<(std::ostream &os, const Fixed &ref );
	
#endif