/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:37:11 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/18 12:53:24 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "[Dog] Constructor Called" << std::endl;
}

Dog::Dog( const Dog &copy )
{
	_type = copy._type;
	std::cout << "[Dog] Constructor Copy Called" << std::endl;
}

Dog	&Dog::operator=( const Dog &copy )
{
	_type = copy._type;
	std::cout << "[Dog] Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << getType() << " : Wouf!" << std::endl;
}