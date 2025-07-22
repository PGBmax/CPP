/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:30:16 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/22 13:53:47 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "[WrongCat] Constructor Called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy )
{
	*this = copy;
	std::cout << "[WrongCat] Constructor Copy Called" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &copy )
{
	_type = copy._type;
	std::cout << "[WrongCat] Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor Called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << getType() << " : WrongMiaou" << std::endl;
}