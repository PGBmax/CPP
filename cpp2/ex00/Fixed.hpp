/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:01:08 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/25 03:08:47 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed &copy);
		~Fixed();
		Fixed &operator=( const Fixed &ref );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					_num;
		static const int	_stock;
};

#endif