/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:24:07 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/22 14:15:43 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	if (DEBUG)
		std::cout << BLU << "[AAnimal]	Constructor Called" << RST << std::endl;
}

AAnimal::AAnimal( const AAnimal &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << BLU << "[AAnimal]	Constructor Copy Called" << RST << std::endl;
}

AAnimal	&AAnimal::operator=( const AAnimal &copy )
{
	this->_type = copy._type;
	if (DEBUG)
		std::cout << BLU << "[AAnimal]	Constructor Copy Assignment Called" << RST << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	if (DEBUG)
		std::cout << BLU << "[AAnimal]	Destructor Called" << RST << std::endl;
}

const std::string &AAnimal::getType() const
{
	return (_type);
}

void AAnimal::makeSound() const
{
	std::cout << CYN << getType() << " : *AAnimal Sound*" << RST << std::endl;
}