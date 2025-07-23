/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:37:11 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:11:53 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	if (DEBUG)
		std::cout << "[Dog]		Constructor Called" << std::endl;
}

Dog::Dog( const Dog &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << "[Dog]		Constructor Copy Called" << std::endl;
}

Dog	&Dog::operator=( const Dog &copy )
{
	_type = copy._type;
	if (DEBUG)
		std::cout << "[Dog]		Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	if (DEBUG)
		std::cout << "[Dog]		Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << getType() << "	: Wouf!" << std::endl;
}