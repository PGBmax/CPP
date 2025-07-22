/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:24:07 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/22 13:53:25 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "[Animal] Constructor Called" << std::endl;
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
	std::cout << "[Animal] Constructor Copy Called" << std::endl;
}

Animal	&Animal::operator=( const Animal &copy )
{
	this->_type = copy._type;
	std::cout << "[Animal] Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor Called" << std::endl;
}

const std::string &Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << getType() << " : *Animal Sound*" << std::endl;
}