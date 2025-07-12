/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:08:52 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/12 15:07:49 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_stock = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( const int num )
{
	std::cout << "Int constructor called" << std::endl;
	this->_num = num;
	for (int i = 0; i < _stock; i++)
		this->_num *= 2;
}

Fixed::Fixed( const float num )
{
	float temp;
	std::cout << "Float constructor called" << std::endl;
	temp = num;
	for (int i = 0; i < _stock; i++)
		temp *= 2;
	this->_num = roundf(temp);
}

Fixed	&Fixed::operator=( const Fixed &ref )
{
	std::cout << "Copy assignement operator called" << std::endl;
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
	float num = (float)this->_num;
	for (int i = 0; i < _stock; i++)
		num /= 2;
	return (num);
}

int		Fixed::toInt( void ) const
{
	float num = (float)this->_num;
	for (int i = 0; i < _stock; i++)
		num /= 2;
	return (roundf(num));
}