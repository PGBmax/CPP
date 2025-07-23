/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:30:16 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 14:04:29 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	if (DEBUG)
		std::cout << YEL << "[WrongCat] Constructor Called" << RST << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << YEL << "[WrongCat] Constructor Copy Called" << RST << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &copy )
{
	_type = copy._type;
	if (DEBUG)
		std::cout << YEL << "[WrongCat] Constructor Copy Assignment Called" << RST << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	if (DEBUG)
		std::cout << YEL << "[WrongCat] Destructor Called" << RST << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << CYN << getType() << " : WrongMiaou" << RST << std::endl;
}