/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:30:16 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:14:00 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	if (DEBUG)
		std::cout << "[Cat]		Constructor Called" << std::endl;
}

Cat::Cat( const Cat &copy )
{
	_brain = new Brain();
	*this = copy;
	if (DEBUG)
		std::cout << "[Cat]		Constructor Copy Called" << std::endl;
}

Cat	&Cat::operator=( const Cat &copy )
{
	_type = copy._type;
	delete _brain;
	_brain = new Brain();
	*_brain = *copy._brain;
	if (DEBUG)
		std::cout << "[Cat]		Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	if (DEBUG)
		std::cout << "[Cat]		Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << getType() << " : Miaou" << std::endl;
}

Brain	*Cat::getBrainAddress() const
{
	return (_brain);
}