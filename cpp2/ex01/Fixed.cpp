/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:08:52 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/13 11:16:24 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy ) : _num(0)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( const int num )
{
	std::cout << "Int constructor called" << std::endl;
	this->_num = num << this->_stock;
}

Fixed::Fixed( const float num )
{
	std::cout << "Float constructor called" << std::endl;
	this->_num = (int)roundf(num * (1 << this->_stock));
}

Fixed	&Fixed::operator=( const Fixed &ref )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_num = ref.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &ref )
{
	os << ref.toFloat();
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	return (this->_num);
}

void	Fixed::setRawBits( int const raw )
{
	this->_num = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_num / (1 << this->_stock));
}

int		Fixed::toInt( void ) const
{
	return ((float)this->_num / (1 << this->_stock));
}