/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:54:25 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/26 14:41:16 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point( const float x, const float y );
		Point( const Point &copy );
		Point	&operator=(const Point &op);
		~Point();

		Fixed getX();
		Fixed getY();
	private:
		Fixed _x;
		Fixed _y;
};

#endif