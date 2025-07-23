/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:30:16 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:20:43 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	if (DEBUG)
		std::cout << "[WrongCat]	Constructor Called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << "[WrongCat]	Constructor Copy Called" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &copy )
{
	_type = copy._type;
	if (DEBUG)
		std::cout << "[WrongCat]	Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	if (DEBUG)
		std::cout << "[WrongCat]	Destructor Called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << getType() << " : WrongMiaou" << std::endl;
}