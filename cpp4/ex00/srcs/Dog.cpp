/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:59:49 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/06 14:06:16 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog()
{
	std::cout << CYN << "Dog constructor called" << std::endl << RST;
	setType( "Dog" );
}

Dog::Dog( const Dog &copy )
{
	*this = copy;
	std::cout << CYN << "Dog constructor copy called" << std::endl << RST;	
}

Dog	&Dog::operator=( const Dog &op )
{
	this->type = op.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << CYN << "Dog destructor called" << std::endl << RST;	
}