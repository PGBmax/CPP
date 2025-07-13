/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:01:08 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/13 00:26:02 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed( const Fixed &copy );
		Fixed &operator=( const Fixed &ref );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					_num;
		static const int	_stock = 8;
};

#endif