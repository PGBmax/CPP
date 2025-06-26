/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:08:52 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/26 13:41:00 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_stock = 8;

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed( const Fixed &copy )
{
	*this = copy;
}

Fixed::Fixed( const int num )
{
	int temp;
	temp = num;
	for (int i = 0; i < _stock; i++)
		temp *= 2;
	this->_num = num;
}

Fixed::Fixed( const float num )
{
	float temp;
	temp = num;
	for (int i = 0; i < _stock; i++)
		temp *= 2;
	this->_num = roundf(temp);
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(const Fixed &op)
{
	this->_num = op.getRawBits();
	return *this;
}

Fixed	Fixed::operator*(const Fixed &op) const
{
	Fixed	num;
	num._num = this->_num * op._num;
	return (num); 
}

Fixed	Fixed::operator/(const Fixed &op) const
{
	Fixed	num;
	num._num = this->_num / op._num;
	return (num); 
}

Fixed	Fixed::operator+(const Fixed &op) const
{
	Fixed	num;
	num._num = this->_num + op._num;
	return (num); 
}

Fixed	Fixed::operator-(const Fixed &op) const
{
	Fixed	num;
	num._num = this->_num - op._num;
	return (num); 
}

Fixed	Fixed::operator++(int)
{
	Fixed	it;
	it._num = this->_num;
	this->_num += 1;
	return (it);
}

Fixed	Fixed::operator++()
{
	this->_num += 1;
	return (*this);
}

bool	Fixed::operator==(const Fixed &op) const
{
	if (this == &op)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &op) const
{
	if (this != &op)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &op) const
{
	if (this < &op)
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &op) const	
{
	if (this > &op)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &op) const
{
	if (this <= &op)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &op) const
{
	if (this >= &op)
		return (true);
	return (false);
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.operator>=(b))
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.operator>=(b))
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.operator<=(b))
		return (a);
	return (b);		
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.operator<=(b))
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &os, const Fixed &ref )
{
	os << ref.toFloat();
	return os;
}