/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:30:16 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:11:50 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	if (DEBUG)
		std::cout << "[Cat]		Constructor Called" << std::endl;
}

Cat::Cat( const Cat &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << "[Cat]		Constructor Copy Called" << std::endl;
}

Cat	&Cat::operator=( const Cat &copy )
{
	_type = copy._type;
	if (DEBUG)
		std::cout << "[Cat]		Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	if (DEBUG)
		std::cout << "[Cat]		Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << getType() << "	: Miaou" << std::endl;
}