/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:24:07 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:15:01 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	if (DEBUG)
		std::cout << "[WrongAnimal] Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << "[WrongAnimal] Constructor Copy Called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &copy )
{
	this->_type = copy._type;
	if (DEBUG)
		std::cout << "[WrongAnimal] Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	if (DEBUG)
		std::cout << "[WrongAnimal] Destructor Called" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << getType() << " : *WrongAnimal Sound*" << std::endl;
}