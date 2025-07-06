/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:59:49 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/06 14:06:11 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat()
{
	std::cout << CYN << "Cat constructor called" << std::endl << RST;
	setType( "Cat" );
}

Cat::Cat( const Cat &copy )
{
	*this = copy;
	std::cout << CYN << "Cat constructor copy called" << std::endl << RST;	
}

Cat	&Cat::operator=( const Cat &op )
{
	this->type = op.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << CYN << "Cat destructor called" << std::endl << RST;	
}