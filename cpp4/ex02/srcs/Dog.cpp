/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:37:11 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:20:32 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	if (DEBUG)
		std::cout << "[Dog]		Constructor Called" << std::endl;
}

Dog::Dog( const Dog &copy )
{
	_brain = new Brain();
	*this = copy;
	if (DEBUG)
		std::cout << "[Dog]		Constructor Copy Called" << std::endl;
}

Dog	&Dog::operator=( const Dog &copy )
{
	_type = copy._type;
	delete _brain;
	_brain = new Brain();
	*_brain = *copy._brain;
	if (DEBUG)
		std::cout << "[Dog]		Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	if (DEBUG)
		std::cout << "[Dog]		Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << getType() << " : Wouf!" << std::endl;
}

Brain	*Dog::getBrainAddress() const
{
	return (_brain);
}