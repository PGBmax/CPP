/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:39:25 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/06 15:53:34 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << CYN << "Animal constructor called" << std::endl << RST;
	setType( "None" );
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
	std::cout << CYN << "Animal constructor copy called" << std::endl << RST;	
}

Animal	&Animal::operator=( const Animal &op )
{
	this->type = op.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << CYN << "Animal destructor called" << std::endl << RST;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void		Animal::setType( std::string name )
{
	this->type = name;
}

void		Animal::makeSound() const
{
	std::cout << RED;
	if (getType() == "Dog")
		std::cout << "Wouff" << std::endl;
	else if (getType() == "Cat")
		std::cout << "Miaou" << std::endl;
	else
		std::cout << "sybau" << std::endl;
	std::cout << RST;
}