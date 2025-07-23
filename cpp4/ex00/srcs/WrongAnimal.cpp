/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:24:07 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 13:18:41 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	if (DEBUG)
		std::cout << YEL << "[WrongAnimal]	Constructor Called" << RST << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << YEL << "[WrongAnimal]	Constructor Copy Called" << RST << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &copy )
{
	this->_type = copy._type;
	if (DEBUG)
		std::cout << YEL << "[WrongAnimal]	Constructor Copy Assignment Called" << RST << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	if (DEBUG)
		std::cout << YEL << "[WrongAnimal]	Destructor Called" << RST << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << CYN << getType() << " : *WrongAnimal Sound*" << RST << std::endl;
}