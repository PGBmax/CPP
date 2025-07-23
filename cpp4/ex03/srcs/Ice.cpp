/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:24:03 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 14:14:00 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
	if (DEBUG)
		std::cout << BLU << "Ice Constructor Called" << std::endl;
}

Ice::Ice(const Ice &cpy)
{
	*this = cpy;
	if (DEBUG)
		std::cout << BLU << "Ice Constructor Copy Called" << std::endl;
}

Ice	&Ice::operator=(const Ice &cpy)
{
	_type = cpy.getType();
	if (DEBUG)
		std::cout << BLU << "Ice Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Ice::~Ice()
{
	if (DEBUG)
		std::cout << BLU << "Ice Destructor Called" << std::endl;
}

std::string const	&Ice::getType() const
{
	return (_type);
}

AMateria	*Ice::clone() const
{
	AMateria	*IceClone = new Ice();
	return (IceClone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << " *" << RST << std::endl;
}