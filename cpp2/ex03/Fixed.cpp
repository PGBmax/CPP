/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:08:52 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/13 13:11:20 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	this->_num = num << this->_stock;
}

Fixed::Fixed( const float num )
{
	this->_num = (int)roundf(num * (1 << this->_stock));
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
	return (this->toFloat() * op.toFloat());
}

Fixed	Fixed::operator/(const Fixed &op) const
{
	return (this->toFloat() / op.toFloat());
}

Fixed	Fixed::operator+(const Fixed &op) const
{
	return (this->toFloat() + op.toFloat());
}

Fixed	Fixed::operator-(const Fixed &op) const
{
	return (this->toFloat() - op.toFloat());
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

Fixed	Fixed::operator--(int)
{
	Fixed	it;
	it._num = this->_num;
	this->_num -= 1;
	return (it);
}

Fixed	Fixed::operator--()
{
	this->_num -= 1;
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
	if (this->toFloat() < op.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &op) const	
{
	if (this->toFloat() > op.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &op) const
{
	if (this->toFloat() <= op.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &op) const
{
	if (this->toFloat() >= op.toFloat())
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
	return ((float)this->_num / (1 << this->_stock));
}

int		Fixed::toInt( void ) const
{
	return ((float)this->_num / (1 << this->_stock));
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.operator<=(b))
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.operator<=(b))
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.operator>=(b))
		return (a);
	return (b);		
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.operator>=(b))
		return (a);
	return (b);
}

void	Fixed::Abs()
{
	if (this->_num < 0)
		this->_num *= -1;
}

std::ostream &operator<<(std::ostream &os, const Fixed &ref )
{
	os << ref.toFloat();
	return os;
}