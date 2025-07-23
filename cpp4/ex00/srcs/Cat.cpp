/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:30:16 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 13:18:18 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	if (DEBUG)
		std::cout << BLU << "[Cat]		Constructor Called" << RST << std::endl;
}

Cat::Cat( const Cat &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << BLU << "[Cat]		Constructor Copy Called" << RST << std::endl;
}

Cat	&Cat::operator=( const Cat &copy )
{
	_type = copy._type;
	if (DEBUG)
		std::cout << BLU << "[Cat]		Constructor Copy Assignment Called" << RST << std::endl;
	return (*this);
}

Cat::~Cat()
{
	if (DEBUG)
		std::cout << BLU << "[Cat]		Destructor Called" << RST << std::endl;
}

void Cat::makeSound() const
{
	std::cout << CYN <<getType() << "	: Miaou" << RST << std::endl;
}