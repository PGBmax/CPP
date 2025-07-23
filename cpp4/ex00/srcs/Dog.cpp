/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:37:11 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 13:18:27 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	if (DEBUG)
		std::cout << BLU << "[Dog]		Constructor Called" << RST << std::endl;
}

Dog::Dog( const Dog &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << BLU << "[Dog]		Constructor Copy Called" << RST << std::endl;
}

Dog	&Dog::operator=( const Dog &copy )
{
	_type = copy._type;
	if (DEBUG)
		std::cout << BLU << "[Dog]		Constructor Copy Assignment Called" << RST << std::endl;
	return (*this);
}

Dog::~Dog()
{
	if (DEBUG)
		std::cout << BLU << "[Dog]		Destructor Called" << RST << std::endl;
}

void Dog::makeSound() const
{
	std::cout << CYN << getType() << "	: Wouf!" << RST << std::endl;
}