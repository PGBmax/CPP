/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:01:08 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/27 11:46:01 by pboucher         ###   ########.fr       */
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
		Fixed( const float num );
		~Fixed();

		Fixed	&operator=(const Fixed &op);
		Fixed	operator*(const Fixed &op) const;
		Fixed	operator/(const Fixed &op) const;
		Fixed	operator+(const Fixed &op) const;
		Fixed	operator-(const Fixed &op) const;
		Fixed	operator++(int);
		Fixed	operator++(	);

		bool	operator==(const Fixed &op) const;
		bool	operator!=(const Fixed &op) const;
		bool	operator<(const Fixed &op) const;
		bool	operator>(const Fixed &op) const;
		bool	operator<=(const Fixed &op) const;
		bool	operator>=(const Fixed &op) const;
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;	
		int		toInt( void ) const;

		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		void	Abs();

	private:
		int					_num;
		static const int	_stock;
};
std::ostream &operator<<(std::ostream &os, const Fixed &ref );

#endif