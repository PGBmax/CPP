/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:24:07 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 13:30:24 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	if (DEBUG)
		std::cout << BLU << "[Animal]	Constructor Called" << RST << std::endl;
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << BLU << "[Animal]	Constructor Copy Called" << RST << std::endl;
}

Animal	&Animal::operator=( const Animal &copy )
{
	this->_type = copy._type;
	if (DEBUG)
		std::cout << BLU << "[Animal]	Constructor Copy Assignment Called" << RST << std::endl;
	return (*this);
}

Animal::~Animal()
{
	if (DEBUG)
		std::cout << BLU << "[Animal]	Destructor Called" << RST << std::endl;
}

const std::string &Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << CYN << getType() << " : *Animal Sound*" << RST << std::endl;
}